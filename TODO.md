
1) Add size contructor for arrays (immediate init). There is such a constructor
   for views, but not for arrays for now.
2) There is still unresolved problem with arrays of zero size. 
   Latest resolution is that init for zero size array works without errors
   and it returns free array. Which is mostly correct, however it contradicts
   assumtion that I always followed: in free (previously called uninited) array
   all internal fields except for d-pointer are meaningless including size  
   (now it's inside arranger).  
   Two possilbe resolutions:
   a) Add some sort of 'inited' flag inside array (and is_inited method).
      It only can be done as separate flag, for example special bit.
   b) Somehow state that size is always meaninfull for array, even if
      real data is not allocated. In this case we should initialize 
      dynamic dimensions with zero for example in constructor.
   c) Same as b) but for free array size is always zero (which is pretty
      intuitive). In initialization dyn sizes must be set to zero. In case
      of errors during init, sizes also must be set back to zero. The main
      problem is that it's impossible to use tensor with static dimenions 
      only. But I think I can live with that.
   In any case I think, that is_free() means exactly if is there any
   real actual data associated with array.
3) Still not great situation with owning and copy semantics (possible 
   lost of data owning during accidential copy). There are some possiblities
   to resolve this problem, for example make own_ to be template static
   parameter instead of real-time. Another option is to create another derived
   class (base class only will serve to access data without owning it and 
   derived class will be responsible for memory managment). This derived
   class will be noncopyable and only moveable. In any case it creates problem
   with having two separate classes which I always disliked. YAO variant is
   to create derived class from current arrays without changing them. 
   This class (some array_uniqe) will have only move semantics and always
   will own data. From this class we can make copies using ordinar arrays.
   Still could cause some problems if misused (for example, if returned from
   function as ordinar array) and still requieres two classes to use. But 
   at least you don't HAVE to use them both if you sure what are you doing.
4) Arranger concept
5) Think about subarrays and slices (using arrangers)
6) In tensor_array_nd_view::init if init_by_ throws exception, view can 
   stuck in incorrect state (array_ is inited and *this(host array) is not).
   Suppose we need to catch and rethrow exception here.
7) The same problem as in 6) we have in tensor_array_nd_visible::init, when 
   init_by_ throws, visible arrays stays in incorrect state (again,
   array_ is inited and *this(host array) is not).
8) SCFD_ARRAYS_ENABLE_INDEX_SHIFT must be 0/1 not defined/undefined
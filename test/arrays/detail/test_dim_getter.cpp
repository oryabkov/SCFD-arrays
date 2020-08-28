// Copyright © 2016-2020 Ryabkov Oleg Igorevich, Evstigneev Nikolay Mikhaylovitch

// This file is part of SCFD.

// SCFD is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 only of the License.

// SCFD is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with SCFD.  If not, see <http://www.gnu.org/licenses/>.


#include <iostream>
#include <scfd/arrays/detail/dim_getter.h>

using namespace scfd::arrays;
using namespace scfd::arrays::detail;

int main(int argc, char const *argv[])
{
    scfd::static_vec::vec<int,3>   dyn_sizes = {10,20,30};
    std::cout << dim_getter<int, 0, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " " 
              << dim_getter<int, 1, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " "
              << dim_getter<int, 2, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " "
              << dim_getter<int, 3, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " "
              << dim_getter<int, 4, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " "
              << dim_getter<int, 5, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " " 
              << dim_getter<int, 6, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " "
              << dim_getter<int, 7, dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::get(dyn_sizes) << " " << std::endl;

    return 0;
}
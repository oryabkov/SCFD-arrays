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
#include <scfd/arrays/detail/dyn_dim_counter.h>

using namespace scfd::arrays;
using namespace scfd::arrays::detail;

static const int test_X0 = dyn_dim_counter<int, 0,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X1 = dyn_dim_counter<int, 1,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X2 = dyn_dim_counter<int, 2,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X3 = dyn_dim_counter<int, 3,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X4 = dyn_dim_counter<int, 4,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X5 = dyn_dim_counter<int, 5,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X6 = dyn_dim_counter<int, 6,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X7 = dyn_dim_counter<int, 7,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;
static const int test_X8 = dyn_dim_counter<int, 8,  dyn_dim,5,1,1,dyn_dim,dyn_dim,234,123>::value;

int main(int argc, char const *argv[])
{
    std::cout << test_X0 << " " << 
                 test_X1 << " " << 
                 test_X2 << " " << 
                 test_X3 << " " << 
                 test_X4 << " " << 
                 test_X5 << " " << 
                 test_X6 << " " << 
                 test_X7 << " " <<
                 test_X8 << " " << std::endl;

    return 0;
}
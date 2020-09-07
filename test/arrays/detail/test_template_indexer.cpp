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
#include <scfd/arrays/detail/template_indexer.h>

#include "gtest/gtest.h"

using namespace scfd::arrays::detail;

static const int test_Y0 = template_indexer<int, 0,  0,5,1,1,0,0,234,123>::value;
static const int test_Y1 = template_indexer<int, 1,  0,5,1,1,0,0,234,123>::value;
static const int test_Y2 = template_indexer<int, 2,  0,5,1,1,0,0,234,123>::value;
static const int test_Y3 = template_indexer<int, 3,  0,5,1,1,0,0,234,123>::value;
static const int test_Y4 = template_indexer<int, 4,  0,5,1,1,0,0,234,123>::value;
static const int test_Y5 = template_indexer<int, 5,  0,5,1,1,0,0,234,123>::value;
static const int test_Y6 = template_indexer<int, 6,  0,5,1,1,0,0,234,123>::value;
static const int test_Y7 = template_indexer<int, 7,  0,5,1,1,0,0,234,123>::value;

int main(int argc, char const *argv[])
{
    std::cout << test_Y0 << " " << 
                 test_Y1 << " " << 
                 test_Y2 << " " << 
                 test_Y3 << " " << 
                 test_Y4 << " " << 
                 test_Y5 << " " << 
                 test_Y6 << " " << 
                 test_Y7 << " " << std::endl;

    return 0;
}
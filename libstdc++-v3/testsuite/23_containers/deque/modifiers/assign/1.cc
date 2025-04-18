// Copyright (C) 2018-2025 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <deque>

#include <testsuite_iterators.h>
#include <testsuite_hooks.h>

typedef __gnu_test::test_container<int, __gnu_test::input_iterator_wrapper>
  input_iterator_seq;

int main()
{
  std::deque<int> d;

  int array[] = { 0, 1, 2 };
  input_iterator_seq seq(array, array + 3);

  d.assign(seq.begin(), seq.end());
  VERIFY( d.size() == 3 );
  return 0;
}

// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/next.cpp {{{
 * \file yaul/tml/next.cpp
 * \example yaul/tml/next.cpp
 * \brief Usage example for \ref yaul::tml::next
 */ // }}}

// [Code]
#include <yaul/tml/next.hpp>
using namespace yaul::tml;

template <long N> struct iter { typedef iter<N+1> next; };
typedef iter<2> i1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<next<i1>::type,iter<3> >::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

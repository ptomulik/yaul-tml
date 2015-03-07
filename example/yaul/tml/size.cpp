// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/size.cpp {{{
 * \file yaul/tml/size.cpp
 * \example yaul/tml/size.cpp
 * \brief Usage example for \ref yaul::tml::size
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/size.hpp>
#include <yaul/tml/size_t.hpp>

using namespace yaul::tml;

typedef sequence<char,short,int,float> s1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<size<s1>::type,size_t_<4ul> >::value, "");
static_assert(size<s1>::value == 4, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

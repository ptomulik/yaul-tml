// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/equal.cpp {{{
 * \file yaul/tml/equal.cpp
 * \example yaul/tml/equal.cpp
 * \brief Usage example for \ref yaul::tml::equal
 */ // }}}

// [Code]
#include <yaul/tml/equal.hpp>
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/equal_to.hpp>
#include <yaul/tml/placeholders.hpp>

using namespace yaul::tml;

// equal sequences
static_assert( equal<sequence<>,sequence<> >::value, "");
static_assert( equal<sequence<int>, sequence<int> >::value, "");
static_assert( equal<sequence<int,char>, sequence<int,char> >::value, "");

// different content
static_assert(!equal<sequence<int>, sequence<char> >::value, "");
static_assert(!equal<sequence<int,char>, sequence<char,int> >::value, "");
static_assert(!equal<sequence_c<int,1,2,3>, sequence_c<long,1,2,3> >::value, "");

// different size
static_assert(!equal<sequence<>, sequence<char> >::value, "");
static_assert(!equal<sequence<int>, sequence<> >::value, "");
static_assert(!equal<sequence<int,char>, sequence<int> >::value, "");
static_assert(!equal<sequence<int>, sequence<int,char> >::value, "");

// custom predicate
static_assert( equal<sequence_c<int>, sequence_c<long> >::value, "");
static_assert( equal<sequence_c<int,1,2,3>, sequence_c<long,1,2,3>, equal_to<_1,_2> >::value, "");
static_assert(!equal<sequence_c<int,1,2,3>, sequence_c<int,2,2,1>, equal_to<_1,_2> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

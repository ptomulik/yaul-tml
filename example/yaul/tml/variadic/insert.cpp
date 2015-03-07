// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/insert.cpp {{{
 * \file yaul/tml/variadic/insert.cpp
 * \example yaul/tml/variadic/insert.cpp
 * \brief Usage example for \ref yaul::tml::variadic::insert
 */ // }}}

// [Code]
#include <yaul/tml/variadic/insert.hpp>
#include <yaul/tml/quote.hpp>
#include <yaul/tml/int.hpp>

using namespace yaul::tml;

template <class...> struct seq;

typedef variadic::insert<quote<seq>, int_<1>, short>::apply<char,int,float>::type s1;
typedef variadic::insert_c<quote<seq>, 1, short>::apply<char,int,float>::type s2;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<s1,seq<char,short,int,float> >::value , "");
static_assert(is_same<s2,seq<char,short,int,float> >::value , "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

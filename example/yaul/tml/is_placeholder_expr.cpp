// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/is_placeholder_expr.cpp {{{
 * \file yaul/tml/is_placeholder_expr.cpp
 * \example yaul/tml/is_placeholder_expr.cpp
 * \brief Usage example for \ref yaul::tml::is_placeholder_expr
 */ // }}}

// [Code]
#include <yaul/tml/is_placeholder_expr.hpp>
#include <yaul/tml/placeholders.hpp>

using namespace yaul::tml;

struct X {};
struct Y;

template<class, class, class> struct f3 { };
static_assert(!is_placeholder_expr<int>::value, "");
static_assert(!is_placeholder_expr<X>::value, "");
static_assert(!is_placeholder_expr<Y>::value, "");
static_assert(!is_placeholder_expr<f3<int,void,float> >::value, "");
static_assert( is_placeholder_expr<arg<1> >::value, "");
static_assert( is_placeholder_expr<_1>::value, "");
static_assert( is_placeholder_expr<_>::value, "");
static_assert( is_placeholder_expr<f3<int,_1,float> >::value, "");
static_assert( is_placeholder_expr<f3<int,void,f3<_1,_2,_3> > >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

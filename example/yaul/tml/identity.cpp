// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/identity.cpp {{{
 * \file yaul/tml/identity.cpp
 * \example yaul/tml/identity.cpp
 * \brief Usage example for \ref yaul::tml::identity
 */ // }}}

// [Code]
#include <yaul/tml/identity.hpp>
#include <yaul/tml/is_same.hpp>

using namespace yaul::tml;
static_assert(is_same<identity<int>::type,int>::value, "");
static_assert(is_same<identity<void>::type,void>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

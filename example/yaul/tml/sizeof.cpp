// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/sizeof.cpp {{{
 * \file yaul/tml/sizeof.cpp
 * \example yaul/tml/sizeof.cpp
 * \brief Usage example for \ref yaul::tml::sizeof_
 */ // }}}

// [Code]
#include <yaul/tml/sizeof.hpp>

using namespace yaul::tml;
static_assert(sizeof_<char>::value == sizeof(char), "");
static_assert(sizeof_<int>::value == sizeof(int), "");
static_assert(sizeof_<float>::value == sizeof(float), "");
static_assert(sizeof_<char[4]>::value == sizeof(char[4]), "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

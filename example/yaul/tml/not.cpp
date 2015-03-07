// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/not.cpp {{{
 * \file yaul/tml/not.cpp
 * \example yaul/tml/not.cpp
 * \brief Usage example for \ref yaul::tml::not_
 */ // }}}

// [Code]
#include <yaul/tml/not.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/integral_c_tag.hpp>

using namespace yaul::tml;

struct t { typedef true_ type; typedef integral_c_tag numeric_tag; };
struct f { typedef false_ type; typedef integral_c_tag numeric_tag; };

static_assert(not_<false_>::value == true, "");
static_assert(not_<true_>::value == false, "");
static_assert(not_<f>::value == true, "");
static_assert(not_<t>::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

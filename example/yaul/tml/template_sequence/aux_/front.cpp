// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/template_sequence/aux_/front.cpp {{{
 * \file yaul/tml/template_sequence/aux_/front.cpp
 * \example yaul/tml/template_sequence/aux_/front.cpp
 * \brief Usage example for \ref yaul::tml::front_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <yaul/tml/front.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/front.hpp>

using namespace yaul::tml;

template <class ...> struct seq { typedef aux::template_sequence_tag sequence_tag; };
typedef seq<char, short, int, float> s1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<front<s1>::type, char>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

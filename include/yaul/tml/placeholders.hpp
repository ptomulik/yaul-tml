// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/placeholders.hpp

/** // doc: yaul/tml/placeholders.hpp {{{
 * \file yaul/tml/placeholders.hpp
 * \brief Provides argument placeholders
 */ // }}}
#ifndef YAUL_TML_PLACEHOLDERS_HPP
#define YAUL_TML_PLACEHOLDERS_HPP

#include <yaul/tml/arg.hpp>

namespace yaul { namespace tml { namespace placeholders {
typedef arg<-1> _;
} } } // end namespace yaul::tml::placeholders

namespace yaul { namespace tml {
using placeholders:: _;
} } // end namespace yaul::tml

#include <yaul/tml/aux_/placeholders.hpp>

#endif /* YAUL_TML_PLACEHOLDERS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

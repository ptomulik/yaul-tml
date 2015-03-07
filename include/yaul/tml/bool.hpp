// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/bool.hpp

/** // doc: yaul/tml/bool.hpp {{{
 * \file yaul/tml/bool.hpp
 * \brief Provides \ref yaul::tml::bool_
 */ // }}}
#ifndef YAUL_TML_BOOL_HPP
#define YAUL_TML_BOOL_HPP

#include <yaul/tml/bool_fwd.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml {
/** // doc: bool {{{
 * \ingroup TypesNumericGroup
 * \brief A boolean \ref IntConstConcept wrapper
 *
 * \tparam C A value to wrap. A boolean integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        bool C
 *      >
 *  struct bool_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A boolean \ref IntConstConcept wrapper.
 *
 * \par Model of
 *
 * \ref IntConstConcept.
 *
 * \par Expression semantics
 *
 *  The semantics of an expression are defined only where they differ from, or
 *  are not defined in \ref IntConstConcept.
 *
 *  For arbitary integral constant c:
 *  \code
 *    bool_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to bool.
 *
 * \par Example
 * \snippet yaul/tml/bool.cpp Code
 */ // }}}
template <bool C>
  using bool_ = integral_c<bool,C>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_BOOL_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

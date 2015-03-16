// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/find_if.hpp

/** // doc: yaul/tml/find_if.hpp {{{
 * \file yaul/tml/find_if.hpp
 * \brief Provides \ref yaul::tml::find_if
 */ // }}}
#ifndef YAUL_TML_FIND_IF_HPP
#define YAUL_TML_FIND_IF_HPP

#include <yaul/tml/find_if_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: find_if {{{
 * \ingroup TODO: GroupName
 * \struct find_if
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *  struct find_if
 *  {
 *    typedef TODO type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/find_if.cpp Code
 *
 */ // }}}
template <class Sequence, class Pred>
  struct find_if
    : find_if_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence, Pred>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_FIND_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/find_if.hpp

/** // doc: yaul/tml/variadic/find_if.hpp {{{
 * \file yaul/tml/variadic/find_if.hpp
 * \todo Write documentation
 */ // }}}
#ifndef YAUL_TML_VARIADIC_FIND_IF_HPP
#define YAUL_TML_VARIADIC_FIND_IF_HPP

#include <yaul/tml/variadic/find_if_fwd.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<class Pred, long N>
  struct find_if_impl;
} } } } // end namespace yaul::tml::variadic::detail

namespace yaul { namespace tml { namespace variadic {
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
 *    struct find_if
 *    {
 *      template< class... Args >
 *        struct apply
 *        {
 *          TODO
 *        };
 *    };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * TODO
 * \code
 *  typedef find_if< TODO >::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/variadic/find_if.cpp Code
 *
 */ // }}}
template <class Pred>
  struct find_if;
template <class Pred>
  template <class... Args>
    struct find_if<Pred>::apply
      : detail::find_if_impl<Pred,0l>::template apply<Args...>
    { }
} } } // end namespace yaul::tml::variadic

#include <yaul/tml/variadic/aux_/find_if.hpp>

#endif /* YAUL_TML_VARIADIC_FIND_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

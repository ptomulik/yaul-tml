// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/push_back.hpp

/** // doc: yaul/tml/variadic/push_back.hpp {{{
 * \file yaul/tml/variadic/push_back.hpp
 * \brief Provides \ref yaul::tml::variadic::push_back
 */ // }}}
#ifndef YAUL_TML_VARIADIC_PUSH_BACK_HPP
#define YAUL_TML_VARIADIC_PUSH_BACK_HPP

#include <yaul/tml/variadic/push_back_fwd.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: push_back {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct push_back
 * \brief Append an argument to the end of variadic argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the extended arguments will be
 *         applied.
 * \tparam A An arguument to be appended.
 * \tparam Args Arguments to perform the appending on.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template <class F, class A>
 *    struct push_back
 *    {
 *      template<class... Args>
 *      struct apply
 *      {
 *        typedef unspecified type;
 *      };
 *    };
 *  }
 * \endcode
 *
 * \par Description
 *
 * variadic::push_back performs an insertion at the end of the variadic
 * argument pack `Args...` with guaranted O(1) complexity and applies the
 * result to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f` and any types `a1, ... an{n-1}` and
 * any type `an`
 * \code
 *  typedef variadic::push_back<f,an>::apply<a1,...a{n-1}>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/variadic/push_back.cpp Code
 *
 */ // }}}
template <class F, class A>
  struct push_back;
template <class F, class A>
  template<class... Args>
    struct push_back<F,A>::apply
      : yaul::tml::apply<F,Args...,A>
    { };
} } } // end namespace yaul::tml

#endif /* YAUL_TML_VARIADIC_PUSH_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

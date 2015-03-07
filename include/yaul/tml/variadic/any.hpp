// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/any.hpp

/** // doc: yaul/tml/variadic/any.hpp {{{
 * \file yaul/tml/variadic/any.hpp
 * \brief Provides \ref yaul::tml::variadic::any
 */ // }}}
#ifndef YAUL_TML_VARIADIC_ANY_HPP
#define YAUL_TML_VARIADIC_ANY_HPP

#include <yaul/tml/variadic/any_fwd.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template <bool... Args>
  struct any_impl
    : true_
  { };
template <>
  struct any_impl<>
    : false_
  { };
template <bool... Tail>
  struct any_impl<false,Tail...>
    : any_impl<Tail...>
  { };
} } } } // end namespace yaul::tml::variadic::detail

namespace yaul { namespace tml { namespace variadic {
/** // doc: any {{{
 * \ingroup AlgoQueryVariadicGroup
 * \struct any
 * \brief Tests whether a predicate `F` holds for any argument from `Args`
 *
 * \tparam F Predicate. Unary \ref LambdaExprConcept.
 * \tparam Args Arguments to check. Any types.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class F>
 *    struct any
 *    {
 *      template<class... Args>
 *        struct apply
 *        {
 *          typedef unspecified type;
 *        };
 *    };
 *  }
 * \endcode
 *
 *
 * \par Description
 *
 * If the predicate `F` holds for any of the arguments from `Args...`, then
 * `variadic::any<F>::apply<Args...>::type` is `true_`. Otherwise it's
 * `false_`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an unary \ref LambdaExprConcept `f` and any types `args...`
 * \code
 *  typedef variadic::any<f>::apply<args...>::type r;
 * \endcode
 *
 * - **Return type**: Boolean \ref IntConstConcept
 * - **Semantics**: `r` is a boolean \ref IntConstConcept with
 *   `r::value == true` if and only if for any type `ai` from `args...`
 *   `apply<f,ai>::type::value == true` holds.
 *
 * \code
 *  typedef variadic::any<f>::apply<> t;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `t` is a boolean \ref IntConstConcept with `r::value == false`
 *
 * \par Example
 * \snippet yaul/tml/variadic/any.cpp Code
 */ // }}}
template <class F>
  struct any;
template <class F>
  template <class... Args>
    struct any<F>::apply
      : detail::any_impl<yaul::tml::apply<F,Args>::type::value...>
    { };
} } } // end namespace yaul::tml::variadic

#include <yaul/tml/variadic/aux_/any.hpp>

#endif /* YAUL_TML_VARIADIC_ANY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

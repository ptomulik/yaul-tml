// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/join.hpp

/** // doc: yaul/tml/variadic/join.hpp {{{
 * \file yaul/tml/variadic/join.hpp
 * \brief Provides \ref yaul::tml::variadic::join
 */ // }}}
#ifndef YAUL_TML_VARIADIC_JOIN_HPP
#define YAUL_TML_VARIADIC_JOIN_HPP

#include <yaul/tml/variadic/join_fwd.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: join {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct join
 * \brief Concatenate two argument packs.
 *
 * \tparam F An expression to be invoked with the resultant arguments.
 *        \ref LambdaExprConcept.
 * \tparam Args1 First argument pack.
 * \tparam Args2 Second argument pack.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      , class ... Args1
 *      >
 *  struct join
 *  {
 *    template< class... Args2 >
 *    struct apply
 *    {
 *      typedef unspecified type;
 *    };
 *  };
 * \endcode
 *
 * \par Description
 *
 * `variadic::join` concatenates two argument packs with guaranteed `O(1)`
 * complexity and applies the result to expression `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For a \ref LambdaExprConcept `f` and arbitary types `args1...` and
 * `args2...`
 * \code
 *  typedef join<f,args1...>::apply<args2...>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef apply<f,args1...,args2...>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/variadic/join.cpp Code
 *
 */ // }}}
template<class F, class... Args1>
  struct join;
template<class F, class... Args1>
  template<class... Args2>
    struct join<F,Args1...>::apply
      : yaul::tml::apply<F,Args1...,Args2...>
    { };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_JOIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

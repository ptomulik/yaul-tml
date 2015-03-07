// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/apply.hpp

/** // doc: yaul/tml/apply.hpp {{{
 * \file yaul/tml/apply.hpp
 * \brief Provides \ref yaul::tml::apply
 */ // }}}
#ifndef YAUL_TML_APPLY_HPP
#define YAUL_TML_APPLY_HPP

#include <yaul/tml/apply_fwd.hpp>
#include <yaul/tml/apply_wrap.hpp>
#include <yaul/tml/lambda.hpp>

namespace yaul { namespace tml {
/** // doc: apply {{{
 * \ingroup MetafunInvocationGroup
 * \struct apply
 * \brief Invokes a \ref MetafunClassConcept or a \ref LambdaExprConcept
 *
 * \tparam F An expression to invoke. Must be a \ref LambdaExprConcept.
 * \tparam Args Invocation arguments.
 *
 * \par Synopsis
 *
 * \code
 *  template <class F, class... Args>
 *    struct apply
 *    {
 *      typedef unspecified type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * Invokes a \ref MetafunClassConcept or a \ref LambdaExprConcept with
 * arguments ``Args``.
 *
 * \par Expression symantics
 *
 * \code
 * typedef apply<f, a1, ..., an>::type t;
 * \endcode
 *
 * - **Return type**: Any type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply_wrap<lambda<F>::type,a1,...,an>::type t;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/apply.cpp Code
 */ // }}}
template <class F, class... Args>
  struct apply
    : apply_wrap<typename lambda<F>::type, Args...>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_APPLY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/front.hpp

/** // doc: yaul/tml/variadic/front.hpp {{{
 * \file yaul/tml/variadic/front.hpp
 * \brief Provides \ref yaul::tml::variadic::front
 */ // }}}
#ifndef YAUL_TML_VARIADIC_FRONT_HPP
#define YAUL_TML_VARIADIC_FRONT_HPP

#include <yaul/tml/variadic/front_fwd.hpp>
#include <yaul/tml/ref.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: front {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct front
 * \brief Return the first argument from variadic argument pack
 *
 * \tparam Args Arguments to retrieve the argument from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    struct front
 *    {
 *      template<class A1, class... Args>
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
 * variadic::front returns an element from the beginning of the variadic
 * argument pack `Args...` with guaranted O(1) complexity.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any types `a1, ...an`
 * \code
 *  typedef variadic::front::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef a1 r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/variadic/front.cpp Code
 *
 */ // }}}
struct front;
template <class A1, class... Args>
  struct front::apply
    : ref<A1>
  { };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

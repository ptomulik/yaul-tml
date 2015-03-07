// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/empty.hpp

/** // doc: yaul/tml/variadic/empty.hpp {{{
 * \file yaul/tml/variadic/empty.hpp
 * \brief Provides \ref yaul::tml::variadic::empty
 */ // }}}
#ifndef YAUL_TML_VARIADIC_EMPTY_HPP
#define YAUL_TML_VARIADIC_EMPTY_HPP

#include <yaul/tml/variadic/empty_fwd.hpp>
#include <yaul/tml/bool.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: empty {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct empty
 * \brief Checks if the argument pack is empty
 *
 * \tparam Args The argument pack to check.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    struct empty
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
 * Returns an \ref IntConstConcept `c` such that `c::value == true` if and
 * only if the argument pack `Args...` is empty.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any types `args...`
 * \code
 *  typedef variadic::empty::apply<args...>::type c;
 * \endcode
 *
 * - **Return type**: Boolean \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef bool_<(sizeof...(args) == 0ul)>::type c;
 *   \endcode
 *   **Postcondition**:
 *   \code
 *    variadic::empty::apply<args...>::value == ( sizeof...(args) == 0ul )
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/variadic/empty.cpp Code
 *
 */ // }}}
struct empty;
template<class... Args>
  struct empty::apply
    : bool_<(sizeof...(Args) == 0ul)>
  { };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_EMPTY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

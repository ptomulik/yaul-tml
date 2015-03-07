// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/modulus.hpp

/** // doc: yaul/tml/modulus.hpp {{{
 * \file yaul/tml/modulus.hpp
 * \brief Provides \ref yaul::tml::modulus
 */ // }}}
#ifndef YAUL_TML_MODULUS_HPP
#define YAUL_TML_MODULUS_HPP

#include <yaul/tml/modulus_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: modulus {{{
 * \ingroup MetafunArithmeticOpsGroup
 * \struct modulus
 * \brief Returns the modulus of its arguments.
 *
 * \tparam T1 First argument.
 * \tparam T2 Second argument.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      >
 *  struct modulus
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the modulus of its arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2`
 * \code
 *  typedef modulus<c1,c2>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Precondition**:
 *   \code
 *    c2::value != 0
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef integral_c<
 *      decltype(c1::value % c2::value)
 *            , (c1::value % c2::value)
 *    > r;
 *   \endcode
 *
 * \code
 *  typedef modulus<c1,c2> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Precondition**:
 *   \code
 *    c2::value != 0
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : modulus<c1,c2>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/modulus.cpp Code
 *
 */ // }}}
template <class T1, class T2>
  struct modulus
    : modulus_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
      >::template apply<T1,T2>
  { };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/modulus.hpp>

#endif /* YAUL_TML_MODULUS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

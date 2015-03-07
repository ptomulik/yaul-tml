// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/arg.hpp

/** // doc: yaul/tml/arg.hpp {{{
 * \file yaul/tml/arg.hpp
 * \brief Provides \ref yaul::tml::arg
 */ // }}}
#ifndef YAUL_TML_ARG_HPP
#define YAUL_TML_ARG_HPP

#include <yaul/tml/arg_fwd.hpp>

namespace yaul { namespace tml {
/** // doc: arg {{{
 * \ingroup MetafunComposeBindGroup
 * \struct arg
 * \brief Placeholder for nth argument
 *
 * \tparam N A number of argument to return.
 *
 * \par Synopsis
 *
 * \code
 *  template< int N > struct arg;
 *
 *  template <>
 *    struct arg<1>
 *    {
 *      template <class A1, class... Tail>
 *        struct apply
 *        {
 *          typedef A1 type;
 *        };
 *    };
 *
 *  template <int N>
 *    struct arg
 *    {
 *      template <class A1, class... Tail>
 *        struct apply
 *          : arg<N-1>::template apply<Tail...>
 *        { };
 *    };
 * \endcode
 *
 * \par Description
 *
 * `arg<N>` specialization is a \ref MetafunClassConcept that returns the
 * nth of its arguments.
 *
 * \par Expression semantics
 *
 * For any integral constant `n` and arbitrary types `a1, ..., an`
 *
 * \code
 *  typedef apply_wrap< arg<n>, a1, ..., an>::type x;
 * \endcode
 *
 * - **Return type**: A type
 * - **Semantics**: `x` is identical to `an`.
 *
 * \par Example
 * \snippet yaul/tml/arg.cpp Code
 *
 */ // }}}
template <int N>
  struct arg
  {
    static_assert(N > 0, "N must be greater than zero");
    template <class A1, class... Tail>
      struct apply
        : arg<N-1>::template apply<Tail...>
      {
      };
  };
template <>
  struct arg<1>
  {
    template <class A1, class...Tail>
      struct apply
      {
        typedef A1 type;
      };
  };
} } // end namespace yaul::tml


#endif /* YAUL_TML_ARG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

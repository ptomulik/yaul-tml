// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/c_str.hpp

/** // doc: yaul/tml/c_str.hpp {{{
 * \file yaul/tml/c_str.hpp
 * \brief Provides \ref yaul::tml::c_str
 */ // }}}
#ifndef YAUL_TML_C_STR_HPP
#define YAUL_TML_C_STR_HPP

#include <yaul/tml/c_str_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: c_str {{{
 * \ingroup MetafunStringGroup
 * \struct c_str
 * \brief Converts a sequence to null-terminated string.
 *
 * \tparam Sequence An input sequence containing string characters
 * \tparam CharT Character type for the output string
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class CharT = unspecified
 *      >
 *  struct c_str
 *  {
 *    typedef c_str type;
 *    typedef unspecified value_type;
 *    static constexpr value_type value = unspecified;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `c_str` converts a sequence containing characters into a null-terminated
 * string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For a sequence `s` of \ref IntConstConcept "Integral Constants", with
 * `s::value_type` being a valid type of string character
 * \code
 *  s::value_type const* r = c_str<s>::value;
 * \endcode
 *
 * - **Return type**: pointer to string
 * - **Semantics**: `r` is a pointer to null-terminated string created from all
 *   the characters contained in sequence `s`.
 *
 * For a sequence `s` of \ref IntConstConcept "Integral Constants", with
 * values implicitly convertible to `char` and `s::value_type` not being a
 * valid type
 * \code
 *  char const* r = c_str<s>::value;
 * \endcode
 *
 * - **Return type**: pointer to string
 * - **Semantics**: `r` is a pointer to null-terminated string created from all
 *   the characters contained in sequence `s`.
 *
 * For an integral type `t` and a sequence `s` of \ref IntConstConcept
 * "Int Constants" with values implicitly convertible to `t`
 * \code
 *  t const* r = c_str<s,t>::value;
 * \endcode
 *
 * - **Return type**: pointer to string
 * - **Semantics**: `r` is a pointer to null-terminated string created from all
 *   the characters contained in sequence `s`.
 *
 * \code
 *  typedef c_str<s>::value_type v;
 *  typedef c_str<s,t>::value_type v;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: `v` is a type representing array of characters with a size
 *   necessary to contain the string characters plus a string terminator.
 *
 * \code
 *  typedef c_str<s>::type f;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef c_str<s> f;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/c_str.cpp Code
 *
 */ // }}}
template <class Sequence,class CharT>
  struct c_str
    : c_str_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,CharT>
  {
    typedef c_str type;
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_C_STR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

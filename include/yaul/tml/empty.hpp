// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/empty.hpp

/** // doc: yaul/tml/empty.hpp {{{
 * \file yaul/tml/empty.hpp
 * \brief Provides \ref yaul::tml::empty
 */ // }}}
#ifndef YAUL_TML_EMPTY_HPP
#define YAUL_TML_EMPTY_HPP

#include <yaul/tml/empty_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: empty {{{
 * \ingroup SeqIntrGroup
 * \struct empty
 * \brief Test if a sequence is empty
 *
 * \tparam Sequence A sequence to test. \ref ForwardSeqConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct empty
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns an \ref IntConstConcept `c` such that `c::value == true` if and only
 * if the sequence is empty.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardSeqConcept `s`
 *
 * \code
 *  typedef empty<s>::type c;
 * \endcode
 *
 * - **Return type**: Boolean \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef is_same< begin<s>::type, end<s>::type >::type c;
 *   \endcode
 * - **Postcondition**: `empty<s> :: value == (size<s> :: value == 0)`
 *
 * \par Complexity
 *
 * Amortized constant time.
 *
 * \par Example
 * \snippet yaul/tml/empty.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct empty
    : empty_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_EMPTY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

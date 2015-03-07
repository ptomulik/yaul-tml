// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/sequence_generator.hpp

/** // doc: yaul/tml/sequence_generator.hpp {{{
 * \file yaul/tml/sequence_generator.hpp
 * \brief Provides \ref yaul::tml::sequence_generator
 */ // }}}
#ifndef YAUL_TML_SEQUENCE_GENERATOR_HPP
#define YAUL_TML_SEQUENCE_GENERATOR_HPP

#include <yaul/tml/sequence_generator_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: sequence_generator {{{
 * \ingroup SeqIntrGroup
 * \struct sequence_generator
 * \brief Returns sequence generator for a sequence.
 *
 * \todo Finish documentation for sequence_generator.
 *
 * \tparam Sequence A sequence for which the generator is to be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct sequence_generator
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `sequence_generator` returns a \ref SeqGeneratorConcept which may be used to
 * generate sequences concept-identical to `Sequence`.
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/sequence_generator.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct sequence_generator
    : sequence_generator_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_SEQUENCE_GENERATOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/tag.hpp

/** // doc: yaul/tml/template_sequence/aux_/tag.hpp {{{
 * \file yaul/tml/template_sequence/aux_/tag.hpp
 * \brief Provides \ref yaul::tml::aux::template_sequence_tag class
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP

namespace yaul { namespace tml { namespace aux {
/** // doc: template_sequence_tag {{{
 * \ingroup SeqMiscGroup
 * \struct template_sequence_tag
 * \brief Identifies \ref TemplateSeqConcept "Template Sequences"
 *
 * \par Description
 *
 * This tag is used to identify sequences implemented as \ref TemplateSeqConcept.
 */ // }}}
struct template_sequence_tag;
/** // doc: ts_iter_tag {{{
 * \ingroup SeqMiscGroup
 * \struct ts_iter_tag
 * \brief Identifies iterators for \ref TemplateSeqConcept "Template Sequences"
 *
 * \par Description
 *
 * This tag is used to identify iterators for sequences implemented as
 * \ref TemplateSeqConcept.
 */ // }}}
struct ts_iter_tag;
} } } // end namespace yaul::tml::aux

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:

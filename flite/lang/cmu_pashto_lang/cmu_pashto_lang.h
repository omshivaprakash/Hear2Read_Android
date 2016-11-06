/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                       Copyright (c) 2000-2009                         */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK         */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE      */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*  Generic models for Pashto                                            */
/*************************************************************************/

#ifndef _CMU_PASHTO_LANG_H_
#define _CMU_PASHTO_LANG_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "cst_utterance.h"
#include "cst_cart.h"
#include "cst_val.h"
#include "cst_phoneset.h"
#include "cst_lexicon.h"
#include "cst_synth.h"

/* Voices call this to use pashto. */
void cmu_pashto_lang_init(cst_voice *v);

/* Default functions and values that you might need. */
extern const cst_phoneset cmu_pashto_phoneset;
cst_val *cmu_pashto_tokentowords(cst_item *token);

extern const cst_cart cmu_pashto_phrasing_cart;

#ifdef __cplusplus
}  /* extern "C" */
#endif /* __cplusplus */

#endif

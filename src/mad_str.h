#ifndef MAD_STR_H
#define MAD_STR_H

/*
 o-----------------------------------------------------------------------------o
 |
 | String module interface
 |
 | Methodical Accelerator Design - Copyright CERN 2016+
 | Support: http://cern.ch/mad  - mad at cern.ch
 | Authors: L. Deniau, laurent.deniau at cern.ch
 | Contrib: -
 |
 o-----------------------------------------------------------------------------o
 | You can redistribute this file and/or modify it under the terms of the GNU
 | General Public License GPLv3 (or later), as published by the Free Software
 | Foundation. This file is distributed in the hope that it will be useful, but
 | WITHOUT ANY WARRANTY OF ANY KIND. See http://gnu.org/licenses for details.
 o-----------------------------------------------------------------------------o

  Purpose:
  - extra functions of fast string manipulation.

 o-----------------------------------------------------------------------------o
 */

#include "mad_defs.h"

// --- interface --------------------------------------------------------------o

str_t mad_str_trim          (str_t str, ssz_t len[2]);
str_t mad_str_split         (str_t str, ssz_t len[5], str_t sep);
str_t mad_str_split_bracket (str_t str, ssz_t len[6]);

// ----------------------------------------------------------------------------o

#endif // MAD_STR_H

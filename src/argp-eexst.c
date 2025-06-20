/* SPDX-License-Identifier: LGPL-2.1-or-later */
/* Default definition for ARGP_ERR_EXIT_STATUS
   Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Miles Bader <miles@gnu.ai.mit.edu>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#if defined(HAVE_SYSEXITS_H) && HAVE_SYSEXITS_H
# include <sysexits.h>
#else
# include <stdlib.h>
#endif

#include "argp-standalone.h"

/* The exit status that argp will use when exiting due to a parsing error.
   If not defined or set by the user program, this defaults to EX_USAGE from
   <sysexits.h>.  */
error_t argp_err_exit_status =
#if defined(HAVE_SYSEXITS_H) && HAVE_SYSEXITS_H
  EX_USAGE;
#else
  EXIT_FAILURE;
#endif

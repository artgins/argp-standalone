/*
 * SPDX-FileCopyrightText: 2020 Thomas Mathys
 * SPDX-License-Identifier: LGPL-2.1-or-later
 * argp-standalone: standalone version of glibc's argp functions.
 */

/* Headers */
#define HAVE_MEMPCPY_H 0
#define HAVE_STRCASE_H 0
#define HAVE_STRCHRNUL_H 0
#define HAVE_STRNDUP_H 0
#define HAVE_SYSEXITS_H 1
#define HAVE_UNISTD_H 1

/* Unlocked variants of stdio functions */
#define HAVE_DECL_PUTC_UNLOCKED 1
#define HAVE_DECL_FPUTS_UNLOCKED 1
#define HAVE_DECL_FWRITE_UNLOCKED 1

/* strerror_r and strerror */
#define HAVE_STRERROR_R 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_DECL_STRERROR 1

/* Miscellaneous functions */
#define HAVE_ASPRINTF 1
#define HAVE_MEMPCPY 1
#define HAVE_RANDOM 1
#define HAVE_SLEEP 1
#define HAVE_STRCASECMP 1
#define HAVE_STRCHRNUL 1
#define HAVE_STRNDUP 1

/* Variables */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 1
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 1

/* Types */
#define HAVE_SSIZE_T 1

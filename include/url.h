/*
 * AIDE (Advanced Intrusion Detection Environment)
 *
 * Copyright (C) 2002, 2006, 2019-2020 Rami Lehti, Pablo Virolainen,
 *               Richard van den Berg, Hannes von Haugwitz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _URL_H_INCLUDED
#define _URL_H_INCLUDED

typedef enum {
  url_file = 1,
  url_stdout,
  url_stdin,
  url_stderr,
  url_fd,
  url_ftp,
  url_http,
  url_https,
  url_syslog,
} URL_TYPE;

typedef struct url_t {
  /* Everything before the first ':' */
  URL_TYPE type;
  char* value;
  void* data; /* We might want to pass some list's to multiwriter */ 
} url_t;

URL_TYPE get_url_type(char *);

const char* get_url_type_string(URL_TYPE);

#endif

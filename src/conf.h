/* $Id: conf.h,v 1.1 2002/02/02 19:50:26 jajcus Exp $ */

/*
 *  (C) Copyright 2002 Jacek Konieczny <jajcus@pld.org.pl>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License Version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef conf_h
#define conf_h

extern xmlnode config;

/* returns string (with leading and trailing whitespace stripped) from config file */
/* string is allocated from configs pool */
char *config_load_string(const char *tag);

/* returns formated string from config file */
/* string should be freed after use */
char *config_load_formatted_string(const char *tag);

/* returns number read from config file */
int config_load_int(const char *tag);

#endif

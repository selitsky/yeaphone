/****************************************************************************
 *
 *  File: ypconfig.h
 *
 *  Copyright (C) 2006  Thomas Reitmayr <treitmayr@devbase.at>
 *
 ****************************************************************************
 *
 *  This file is part of Yeaphone.
 *
 *  Yeaphone is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 ****************************************************************************/

#ifndef YPCONFIG_H
#define YPCONFIG_H


int ypconfig_read(const char *fname);
char *ypconfig_get_value(const char *key);
void ypconfig_set_pair(const char *key, const char *value);
int ypconfig_write(char *fname);


#endif

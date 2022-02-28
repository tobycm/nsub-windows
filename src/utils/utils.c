/*
 * CUtils: some small C utilities
 *
 * Copyright (C) 2020 Niki Roo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <string.h>

#include "utils.h"
#include "cstring.h"

char *utils_strdup(const char *source) {
	size_t sz = strlen(source);
	char *new = malloc((sz + 1) * sizeof(char));
	strcpy(new, source);
	return new;
}

cstring *utils_cstrdup(const cstring *source) {
	cstring *clone = new_cstring();
	cstring_add(clone, source->string);
	return clone;
}

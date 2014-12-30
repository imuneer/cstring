/*
 * cstring.c
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#include "cstring.h"

#include <string.h>
#include <stdlib.h>

t_cstring *cstring_create()
{
	t_cstring *str;
	str = (t_cstring *) malloc(sizeof(t_cstring));
	str->size = 1;
	str->value = (char *) malloc(1);
	str->value[0] = '\0';

	return str;
}

int cstring_delete(t_cstring *string) {
	if (string != NULL) {
		if (string->value != NULL)
			free(string->value);
		free (string);
	}
	return 0;
}

int cstring_add(t_cstring *string, char *s)
{
	int new_size = string->size + strlen(s);
	string->value = (char *) realloc(string->value, new_size);
	if (string->value == NULL)
		return -1;
	strcat(string->value, s);
	string->value[new_size-1] = '\0';
	string->size = new_size;
	return 0;
}

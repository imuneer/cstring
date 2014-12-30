/*
 * mstring.c
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#include <string.h>
#include <stdlib.h>
#include "mstring.h"

t_mstring *mstring_create()
{
	t_mstring *str;
	str = (t_mstring *) malloc(sizeof(t_mstring));
	str->size = 1;
	str->value = (char *) malloc(1);
	str->value[0] = '\0';

	return str;
}

int mstring_delete(t_mstring *string) {
	if (string != NULL) {
		if (string->value != NULL)
			free(string->value);
		free (string);
	}
	return 0;
}

int mstring_add(t_mstring *string, char *s)
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

/*
 * main.c
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cstring.h"


int main()
{
	printf("OK DONE\n");

	t_cstring *s = cstring_create();
	t_cstring *s2 = cstring_create();
	cstring_add(s, "This is a fake message. ");
	printf("The value is now : %s\n", s->value);

	cstring_add(s2, "multiple text");
	printf("String 2 : %s\n", s2->value);

	cstring_add(s, "New value added. ");
	printf("The value is now : %s\n", s->value);

	cstring_add(s, "Another message in same line");
		printf("The value is now : %s\n", s->value);


	cstring_delete(s);
	cstring_delete(s2);
	return 0;
}

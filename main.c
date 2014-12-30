/*
 * main.c
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mstring.h"


int main()
{
	printf("OK DONE\n");

	t_mstring *s = mstring_create();
	t_mstring *s2 = mstring_create();
	mstring_add(s, "This is a fake message. ");
	printf("The value is now : %s\n", s->value);

	mstring_add(s2, "multiple text");
	printf("String 2 : %s\n", s2->value);

	mstring_add(s, "New value added. ");
	printf("The value is now : %s\n", s->value);

	mstring_add(s, "Another message in same line");
		printf("The value is now : %s\n", s->value);


	mstring_delete(s);
	mstring_delete(s2);
	return 0;
}

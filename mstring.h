/*
 * mstring.h
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#ifndef MSTRING_H_
#define MSTRING_H_

typedef struct String {
	int size;
	char *value;
} t_mstring;

t_mstring *mstring_create();

int mstring_delete(t_mstring *string);

int mstring_add(t_mstring *string, char *s);

#endif /* MSTRING_H_ */

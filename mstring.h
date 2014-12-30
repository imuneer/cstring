/*
 * mstring.h
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#ifndef MSTRING_H_
#define MSTRING_H_

/**
 * t_mstring
 *
 * A struct to pretend like a String
 */
typedef struct MString {
	int size;
	char *value;
} t_mstring;

/**
 * Create and return a t_mstring type
 */
t_mstring *mstring_create();

/**
 * Free the allocated memory
 *
 * @param t_msring
 * @return int
 */
int mstring_delete(t_mstring *string);

/**
 * Add char array to t_mstring
 *
 * @param t_mstring
 * @param char*
 * @return int
 */
int mstring_add(t_mstring *string, char *s);

/**
 * Assign initial value to the t_mstring
 * @param t_mstring
 * @param char*
 * @return int
 */
int mstring_assign(t_mstring *string, const char *str);

/**
 * Compare two t_mstrings
 */
int mstring_compare(t_mstring *str1, t_mstring *str2);

/**
 * Substring function
 */
int mstring_substring(t_mstring *string, int start, int length);

/**
 * Find the position of specified character
 */
int mstring_charpos(t_mstring *string, const char c);

/**
 * Find the position of specified char *
 */
int mstring_strpos(t_mstring *string, const char *str);

#endif /* MSTRING_H_ */

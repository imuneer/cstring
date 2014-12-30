/*
 * cstring.h
 *
 *  Created on: Dec 30, 2014
 *      Author: muneer
 */

#ifndef CSTRING_H_
#define CSTRING_H_

/**
 * t_cstring
 *
 * A struct to pretend like a String
 */
typedef struct C_String {
	int size;
	char *value;
} t_cstring;

/**
 * Create and return a t_cstring type
 */
t_cstring *cstring_create();

/**
 * Free the allocated memory
 *
 * @param t_msring
 * @return int
 */
int cstring_delete(t_cstring *string);

/**
 * Add char array to t_cstring
 *
 * @param t_cstring
 * @param char*
 * @return int
 */
int cstring_add(t_cstring *string, char *s);

/**
 * Assign initial value to the t_cstring
 * @param t_cstring
 * @param char*
 * @return int
 */
int cstring_assign(t_cstring *string, const char *str);

/**
 * Compare two t_cstrings
 */
int cstring_compare(t_cstring *str1, t_cstring *str2);

/**
 * Substring function
 */
int cstring_substring(t_cstring *string, int start, int length);

/**
 * Find the position of specified character
 */
int cstring_charpos(t_cstring *string, const char c);

/**
 * Find the position of specified char *
 */
int cstring_strpos(t_cstring *string, const char *str);

#endif /* CSTRING_H_ */

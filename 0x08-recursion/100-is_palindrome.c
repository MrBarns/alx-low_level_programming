#include "main.h"

/**
 * endof - go to the end of a string
 * @s: string argument
 *
 * Return: pointer to string end
 */

char *endof(char *s)
{
	if (*s == '\0')
		return (s - 1);

	else
		return (endof(s + 1));
}

/**
 * comparator - compares two strings backwards and forwards
 *
 * @s: forward string
 * @rs: backward string
 *
 * Return: 1 if strings match
 * 0 otherwise
 */


int comparator(char *s, char *rs)
{
	if (*s == '\0')
		return (1);

	if (*s != *rs)
		return (0);

	else
		return (comparator((s + 1), (rs - 1)));
}


/**
 * is_palindrome - check if a string is a palindrome
 * @s: string argument
 *
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */

int is_palindrome(char *s)
{
	char *rs;

	if (*s == '\0')
		return (1);

	rs = endof(s);

	return (comparator(s, rs));
}

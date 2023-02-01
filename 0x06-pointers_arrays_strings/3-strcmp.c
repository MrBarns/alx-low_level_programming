#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: +ve or -ve int if strings are unequal
 * 0 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	for (; ; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if ((*s1 == '\0') || (*s2 == '\0'))
			break;
	}

	return (0);
}

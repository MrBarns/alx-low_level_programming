#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search through
 * @accept: bytes to search for
 *
 * Return: pointer to first occurence
 * NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, a_len;

	for (a_len = 0; *(accept + a_len) != '\0'; a_len++)
		;

	for (; *s != '\0'; s++)
	{
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*s == *(accept + x))
				return (s);
		}
	}

	return ('\0');
}

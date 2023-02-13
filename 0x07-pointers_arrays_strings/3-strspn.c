#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to search in
 * @accept: set of characters to search for
 *
 * Return: number of bytes in initial segment that match bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, count, a_len;

	for (a_len = 0; *(accept + a_len) != '\0'; a_len++)
		;

	count = 0;
	for (; *s != '\0'; s++)
	{
		x = 0;
		while (x < a_len)
		{
			if (*s == *(accept + x))
			{
				count++;
				break;
			}

			if (x == a_len - 1)
				return (count);
			x++;
		}
	}

	return (count);
}

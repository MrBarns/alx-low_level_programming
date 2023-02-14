#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search through
 * @needle: substring to search for
 *
 * Return: pointer to substring if found
 * NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int x;

	for (; *haystack != '\0'; haystack++)
	{
		x = 0;
		while ((*(needle + x) != '\0')
		       && (*(haystack + x) != '\0'; x++)
		       && (*(haystack + x) == *(needle + x)))
		{
			x++;
		}
		if (*(needle + x) == '\0')
			return (haystack);
	}

	return ('\0');
}

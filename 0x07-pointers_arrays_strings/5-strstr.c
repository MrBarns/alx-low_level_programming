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
	unsigned int x, n_len;

	for (n_len = 0; *(needle + n_len) != '\0'; n_len++)
		;

	for (; *haystack != '\0'; haystack++)
	{
		for (x = 0; x < n_len && *(haystack + x) != '\0'; x++)
		{
			if (*(haystack + x) != *(needle + x))
				break;
			if (x == n_len - 1)
				return (haystack);
		}
	}

	return ('\0');
}

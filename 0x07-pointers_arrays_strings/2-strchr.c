#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search in
 * @c: character to search for
 *
 * Return: pointer to first occurence of character if found
 * NULL otherwise
 *
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return ('\0');
}

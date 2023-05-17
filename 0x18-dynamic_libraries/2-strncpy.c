#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(src + x) != '\0')
		x++;

	while (y < n)
	{
		if (y < x)
			*(dest + y) = *(src + y);
		else
			*(dest + y) = 0;
		y++;
	}

	return (dest);
}

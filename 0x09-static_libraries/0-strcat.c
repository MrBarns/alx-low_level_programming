#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = y = 0;
	while (*(dest + x) != '\0')
		x++;

	while (*(src + y) != '\0')
	{
		*(dest + x + 1) = *(dest + x);
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	return (dest);
}

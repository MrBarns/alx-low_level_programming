#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: max bytes of src to concatenate to dest
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	n--;
	while (*(dest + x) != '\0')
		x++;

	while ((*(src + y) != '\0') && (y <= n))
	{
		*(dest + x + 1) = *(dest + x);
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	return (dest);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: buffer for copied memory
 * @src: source of copied memory
 * @n: size of memory to be copied
 *
 * Return: pointer to buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);
}

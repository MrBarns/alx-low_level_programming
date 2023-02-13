#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory to fill
 * @b: byte to fill into s
 * @n: number of bytes of memory to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}

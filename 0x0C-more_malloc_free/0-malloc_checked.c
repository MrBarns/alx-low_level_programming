#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory in bytes
 *
 * Return: void pointer to allocated memory if successful
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}

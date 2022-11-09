#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of array to be created
 * @c: initialization char for the array
 *
 * Return: pointer to array if successful
 * NULL otherwise
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *chr;
		unsigned int x;

		chr = malloc(sizeof(c) * size);

		if (chr == NULL)
		{
			free(chr);
			return (NULL);
		}

		for (x = 0; x < size; x++)
		{
			chr[x] = c;
		}

		return (chr);
		free(chr);
	}
}

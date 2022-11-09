#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: original string
 *
 * Return: pointer to copy if successful
 * NULL otherwise
 *
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	else
	{
		int len = 0;
		char *cpy;
		int x = 0;

		while (str[len] != '\0')
			len++;
		len++;

		cpy = malloc(sizeof(char) * len);

		if (cpy == NULL)
		{
			free(cpy);
			return (NULL);
		}

		for (x = 0; x < len; x++)
			cpy[x] = str[x];

/*		free(cpy); */

		return (cpy);
	}
}

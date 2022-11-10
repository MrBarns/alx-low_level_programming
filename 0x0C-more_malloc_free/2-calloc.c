#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of array members
 * @size: size of individual array member
 *
 * Return: void pointer to array if successful
 * NULL otherwise
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	/* unsigned int x; */

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	/* for (x = 0; x < nmemb; x++) */
	/* arr[x] = 0; */

	return (arr);
}

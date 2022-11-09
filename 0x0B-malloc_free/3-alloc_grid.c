#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the array if successful
 * NULL otherwise
 *
 */

int **alloc_grid(int width, int height)
{
	/* Variable declarations */
	int **arr;
	int x;
	int y;

	/* First error handling */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate space for array of pointers */
	arr = malloc(sizeof(int *) * height);

	/* Error handling */
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	/* Allocate space for arrays in array */
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		/* Error handling */
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}

	return (arr);
}

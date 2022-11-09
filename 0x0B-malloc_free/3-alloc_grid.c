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
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
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

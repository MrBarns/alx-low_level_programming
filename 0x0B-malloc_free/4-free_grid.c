#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory of a 2 dimensional grid
 *
 * @grid: pointer to the array
 * @height: number of arrays in array
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

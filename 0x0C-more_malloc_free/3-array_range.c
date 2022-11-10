#include <stdlib.h>

/**
 * array_range - create array of integers
 *
 * @min: min value of array
 * @max: max value of array
 *
 * Return: pointer to array if successful
 * NULL otherwise
 *
 */

int *array_range(int min, int max)
{
	int x, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < len; x++, min++)
		arr[x] = min;

	return (arr);
}

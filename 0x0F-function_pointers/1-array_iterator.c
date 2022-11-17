#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: array to iterate over
 * @size: size of array
 * @action: function to execute
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}

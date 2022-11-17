/**
 * int_index - search for an integer
 *
 * @array: array to search
 * @size: size of array
 * @cmp: search function
 *
 * Return: index of first match if successful
 * -1 otherwise
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	signed int found = -1, index;

	if (size <= 0)
		goto end;

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			found = index;
			goto end;
		}
	}
end:;
	return (found);
}

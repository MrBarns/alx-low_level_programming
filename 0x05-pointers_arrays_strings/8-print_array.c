#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array to be printed
 * @n: number of elements of a to be printed
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int count;

	if (!(n > 0))
		goto end;

	for (count = 0; count < n; count++)
	{
		if (count == n - 1)
			printf("%d\n", *(a + count));
		else
			printf("%d, ", *(a + count));
	}
end:;
}

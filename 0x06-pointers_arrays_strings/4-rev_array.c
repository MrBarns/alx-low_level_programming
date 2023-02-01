#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 *
 * @a: array to reverse
 * @n: size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	char c;

	x = 0;
	n--;
	while (x < n)
	{
		c = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = c;

		x++;
		n--;
	}
}

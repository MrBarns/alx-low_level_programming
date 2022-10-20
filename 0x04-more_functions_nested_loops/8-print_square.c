#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 *
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		goto end;
	}

	int c1 = size;

	while (c1 > 0)
	{
		int c2 = size;

		while (c2 > 0)
		{
			_putchar('#');
			c2--;
		}
		_putchar('\n');
		c1--;
	}
end:;
}

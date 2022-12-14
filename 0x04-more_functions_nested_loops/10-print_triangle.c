#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle to be printed
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	if (size < 1)
	{
		_putchar('\n');
		goto end;
	} else
	{
		int counter = 1;

		while (counter <= size)
		{
			int hash;
			int space = size - counter;

			while (space > 0)
			{
				_putchar(' ');
				space--;
			}

			for (hash = counter; hash > 0; hash--)
				_putchar('#');

			_putchar('\n');
			counter++;
		}
	}

end:;
}

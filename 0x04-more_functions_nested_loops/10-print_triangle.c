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
	int vsize = size;

	if (size > 0)
	{
		int hash = 1;

		while (vsize > 0)
		{

			int spaces;

			for (spaces  = vsize - hash; spaces > 0; spaces--)
			_putchar(' ');

			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}

			_putchar('\n');

			vsize--;
		}
	}
	else
		_putchar('\n');

}

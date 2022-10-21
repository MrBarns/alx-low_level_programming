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
	if (size < 1)
	{
		_putchar('\n');
	} else
	{
		int counter;

		for (counter = 0; counter < size; counter++)
		{
			int hashtag;

			for (hashtag = size; hashtag > 0; hashtag--)
				_putchar('#');

			_putchar('\n');
		}
	}
}

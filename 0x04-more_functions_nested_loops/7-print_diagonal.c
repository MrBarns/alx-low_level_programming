#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: size of line
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
		goto end;
	}

	for (lines = 0; lines < n; lines++)
	{
		int spaces = lines;

		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}

		_putchar('\\');
		_putchar('\n');
	}
end:;
}

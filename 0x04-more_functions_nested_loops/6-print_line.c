#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of line
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int c;

	if (n < 0)
	{
		_putchar('\n');
		goto end;
	}

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}

	_putchar('\n');
end:;
}

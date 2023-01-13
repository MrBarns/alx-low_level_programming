#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int x, abs, pos;

	x = 1;
	if (n < 0)
	{
		_putchar('-');
		abs = n * -1;
	} else
		abs = n;
	pos = abs;

	while (abs > 9)
	{
		abs /= 10;
		x *= 10;
	}

	while (x >= 1)
	{
		_putchar((pos / x) + 48);
		pos %= x;
		x /= 10;
	}

}

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int x, m = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (x = n; x >= 10; x /= 10)
		m *= 10;

	while (m >= 10)
	{
		_putchar((n / m) + 48);

		n %= m;
		m /= 10;
	}

	_putchar(n + 48);
}

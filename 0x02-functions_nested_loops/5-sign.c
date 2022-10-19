#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: number to be checked
 *
 * Return: 1 if n > 0
 * 0 if n == 0
 * -1 if n < 0
 *
 */

int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		_putchar('+');
		c = 1;
	} else if (n == 0)
	{
		_putchar('0');
		c = 0;
	} else
	{
		_putchar('-');
		c = -1;
	}

	return (c);
}

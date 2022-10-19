#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose digit will be printed
 *
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	int d = n % 10;
	int r;

	if (d >= 0)
	{
		r = d;
		_putchar('0' + r);
	}
	else
	{
		r = d * -1;
		_putchar('0' + r);
	}

	return (r);
}

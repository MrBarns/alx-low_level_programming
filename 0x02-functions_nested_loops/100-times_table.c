#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: positive number not greater than 15
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int a, b, m;

	a = 0;
	if (!(n < 0 || n > 15))
	{
		while (a < (n + 1))
		{
			_putchar(48);
			b = 1;
			while (b < (n + 1))
			{
				_putchar(',');
				_putchar(' ');

				m = a * b;
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m);
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(' ');
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				}
				else
				{
					_putchar((m / 100) + 48);
					_putchar(((m % 100) / 10) + 48);
					_putchar((m % 10) + 48);
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 *
 */

void times_table(void)
{
		int a, b, m, m1, m2;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			m = a * b;
			if (b == 0)
				_putchar('0' + m);
			else if (m < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				m1 = m / 10;
				m2 = m % 10;
				_putchar('0' + m1);
				_putchar('0' + m2);
			}

			if (b == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

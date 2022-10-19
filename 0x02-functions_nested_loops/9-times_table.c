#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 *
 */

void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 9; y++)
		{
			int m = x * y;
			int c3 = m / 10;
			int c1 = ',';
			int c2 = ' ';
			int c4 = m % 10;


			if (y == 0)
				_putchar('0' + m);
			else
			{
				_putchar(c1);
				_putchar(c2);
				if (m > 10)
					_putchar('0' + c3);
				else
					_putchar(c2);

				_putchar('0' + c4);
			}
		}

		_putchar('\n');
	}
}

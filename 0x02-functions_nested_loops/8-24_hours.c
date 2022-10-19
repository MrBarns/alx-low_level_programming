#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int h1 = 0;

	while (h1 < 3)
	{
		int h0 = 0;

		while (h0 < 10)
		{
			int m1 = 0;

			while (m1 < 6)
			{
				int m0 = 0;

				while (m0 < 10)
				{
					_putchar('0' + h1);
					_putchar('0' + h0);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m0);
					_putchar('\n');

					if (h1 == 2 && h0 == 3 && m1 == 5 &&
					    m0 == 9)
						goto endloop;
					else
						m0++;
				}

				m1++;
			}

			h0++;
		}

		h1++;
	}
endloop:;
}

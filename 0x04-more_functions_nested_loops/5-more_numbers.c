#include "main.h"

/**
 * more_numbers - prints 0 - 14, ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			int tens = n / 10;
			int units = n % 10;

			if (tens > 0)
				_putchar('0' + tens);
			_putchar('0' + units);
		}
		_putchar('\n');
	}
}

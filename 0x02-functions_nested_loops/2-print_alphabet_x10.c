#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		int alpha;

		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		count++;
	} return;
}

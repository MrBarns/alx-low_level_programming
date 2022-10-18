#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int ascii_nums = 48;

	for (ascii_nums; ascii_nums <= 57; ascii_nums++)
	{
		putchar(ascii_nums);
		if (ascii_nums < 57)
		{
			putchar(',');
			putchar(' ');
		} else
			putchar('\n');
	}

	return (0);
}


#include <stdio.h>

/**
 * main - print first 98 numbers of the fibonacci sequence
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int fibb, prev1, prev2;
	unsigned int count;

	prev2 = 1;
	prev1 = fibb = 1;
	putchar('1');
	for (count = 0; count < 98; count++)
	{
		fibb = prev1 + prev2;

		printf(", %ld", fibb);
		prev2 = prev1;
		prev1 = fibb;
	}
	putchar('\n');
	return (0);
}

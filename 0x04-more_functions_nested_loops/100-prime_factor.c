#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num, den;

	num = 612852475143;
	for (den = 2; den <= num; den++)
	{
		if (num % den == 0)
		{
			num /= den;
			den--;
		}
	}
	printf("%ld\n", den);
	return (0);
}

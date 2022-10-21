#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: first number in the count
 *
 * Return: Always zero
 *
 */

int print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
	return (0);
}
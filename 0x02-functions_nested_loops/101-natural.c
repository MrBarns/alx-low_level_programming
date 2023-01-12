#include <stdio.h>

/**
 * main - sum up multiples of 3 and 5 less than 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum, count;

	sum = 0;
	for (count = 0; count < 1024; count++)
	{
		if ((count % 3) == 0 || (count % 5) == 0)
			sum += count;
	}

	printf("%d\n", sum);
	return (0);
}

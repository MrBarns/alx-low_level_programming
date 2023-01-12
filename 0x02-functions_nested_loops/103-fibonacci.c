#include <stdio.h>

/**
 * main - sum even fib numbers less than 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int fibb, prev1, prev2;
	unsigned long int sum;

	prev1 = prev2 = 1;
	fibb = 1;
	sum = 0;
	while (fibb < 4000000)
	{
		if ((fibb % 2) == 0)
			sum += fibb;
		prev2 = prev1;
		prev1 = fibb;
		fibb = prev1 + prev2;
	}
	printf("%ld\n", sum);
	return (0);
}

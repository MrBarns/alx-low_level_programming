#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz ");
		else if (n % 3 != 0 && n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", n);
	}
	return (0);
}

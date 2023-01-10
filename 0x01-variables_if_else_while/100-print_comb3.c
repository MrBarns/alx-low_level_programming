#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a phrase to the terminal
 *
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	num1 = 48;

	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);

				if (!(num1 == 56 && num2 == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}

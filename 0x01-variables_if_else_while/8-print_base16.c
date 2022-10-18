#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}

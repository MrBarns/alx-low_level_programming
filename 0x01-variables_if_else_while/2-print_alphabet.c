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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}

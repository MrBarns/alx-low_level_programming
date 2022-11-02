#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int c = 0;

	/* Find Last Character */
	while (*(s + c) != '\0')
	{
		c++;
	}
	c--;

	/* Print from last to first */
	while (!(c < 0))
	{
		_putchar(*(s + c));
		c--;
	}
	_putchar('\n');
}

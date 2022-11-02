#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 *
 * Return: void
 *
 */

void puts_half(char *str)
{
	int count;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (count = len / 2; count < len; count++)
			_putchar(str[count]);
	} else
	{
		for (count = (len / 2) - 1; count < len; count++)
			_putchar(str[count]);
	}
	_putchar('\n');
}

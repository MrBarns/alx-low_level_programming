#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result in
 * @size_r: size of buffer
 *
 * Return: pointer to result buffer if successful
 * 0 otherwise
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, rem = 0, y, bg;

	for (x = 0; n1[x] != '\0'; x++)
		;
	for (y = 0; n2[y] != '\0'; y++)
		;

	if (x > y)
		bg = x;
	else
		bg = y;
	if (size_r <= (bg + 1))
		return (0);
	x--, y--;

	for (; bg >= 0; bg--)
	{
		if (x < 0)
		{
			r[bg] = (((n2[y] - 48) + rem) % 10) + 48;
			rem = ((n2[y] - 48) + rem) / 10;
		}
		if (y < 0)
		{
			r[bg] = (((n1[x] - 48) + rem) % 10) + 48;
			rem = ((n1[x] - 48) + rem) / 10;
		} else
		{
			r[bg] = ((n1[x] - 48) + (n2[y] - 48) + rem) % 10;
			rem = ((n1[x] - 48) + (n2[y] - 48) + rem) / 10;
		}
		x--;
		y--;
	}

	if (*r == '\0')
		return (r + 1);
	else
		return (r);
}

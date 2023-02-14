#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: string to change
 * @to: string to copy
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

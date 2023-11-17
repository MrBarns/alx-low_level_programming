#include <stdio.h>

int print_first(void) __attribute__ ((constructor));

/**
 * print_first - print before main
 *
 * Return: Always 0
 */

int print_first(void)
{
	printf("You're beat! and yet, you must allow,"
"\nI bore my house upon my back!\n");

	return (0);
}

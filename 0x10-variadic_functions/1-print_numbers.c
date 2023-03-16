#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed betwen numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int c;

	va_start(vlist, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(vlist, int));
		if (c == n - 1)
			separator = "\n";

		if (separator)
			printf("%s", separator);
	}

	va_end(vlist);
}

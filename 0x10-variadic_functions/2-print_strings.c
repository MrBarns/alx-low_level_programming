#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list vlist;
	char *str;

	va_start(vlist, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(vlist, char *);
		if (str)
			printf("%s", str);
		else
			printf("%s", "(nil)");

		if (separator && c < n - 1)
			printf("%s", separator);
	}

	va_end(vlist);
	printf("\n");
}

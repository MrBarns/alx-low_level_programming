#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int n = 0, c = 0;
	int tis;
	char *str;

	while (*(format + n) != '\0')
		n++;

	va_start(vlist, format);
	while (c < n)
	{
		tis = 1;

		switch (*(format + c))
		{
		case 'c':
			printf("%c", va_arg(vlist, int));
			break;
		case 'f':
			printf("%f", va_arg(vlist, double));
			break;
		case 'i':
			printf("%d", va_arg(vlist, int));
			break;
		case 's':
			str = va_arg(vlist, char *);

			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			tis = 0;
		}

		if (tis && c < n - 1)
			printf(", ");
		c++;
	}

	printf("\n");
	va_end(vlist);
}

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
	unsigned int c = 0;
	int tis;
	char *str;

	va_start(vlist, format);
	tis = 0;
	while (format && format[c])
	{
		if (tis)
			printf(", ");
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
		c++;
	}

	printf("\n");
	va_end(vlist);
}

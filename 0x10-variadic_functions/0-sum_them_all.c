#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters entered
 *
 * Return: sum of parameters if successful
 * 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int count;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;

	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int argument
 *
 * Return: factorial of n if successful
 * -1 otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

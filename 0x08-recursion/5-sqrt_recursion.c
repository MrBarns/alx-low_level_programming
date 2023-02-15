#include "main.h"

/**
 * sqrt_op - finds the square root of a number
 *
 * @n: int argument
 * @x: count argument
 *
 * Return: natural square root of n if successful
 * -1 otherwise
 */

int sqrt_op(int n, int x)
{
	if (x == (n / x))
	{
		if ((x * x) == n)
			return (x);
		else
			return (-1);
	}

	return (sqrt_op(n, (x + 1)));
}


/**
 * _sqrt_recursion - find the square root of a number
 * @n: int argument
 *
 * Return: natural square root of n if successful
 * -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (n);

	else
		return (sqrt_op(n, 2));
}

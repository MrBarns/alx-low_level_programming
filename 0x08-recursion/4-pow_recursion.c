#include "main.h"

/**
 * _pow_recursion - returns the value of an int raised to a power
 *
 * @x: int to raise
 * @y: power to raise to
 *
 * Return: value of x raised to the power of y if successful
 * -1 otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	else
		return (x * _pow_recursion(x, (y - 1)));
}

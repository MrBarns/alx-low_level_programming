#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b if successful
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: diff of a and b if successful
 * exit unsuccessful otherwise
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b if successful
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of division of ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: division of a and b if successful
 * 100 unsuccessful otherwise
 *
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}

/**
 * op_mod - return the remainder of division of ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: remainder of division of a and b if successful
 * 100 otherwise
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a % b);
}

#include "main.h"

/**
 * is_prime - determine if a number is prime
 *
 * @n: number in question
 * @x: count argument
 *
 * Return: 1 if n is prime
 * 0 otherwise
 */

int is_prime(int n, int x)
{
	if (n == x)
		return (1);

	if ((n % x) == 0)
		return (0);

	else
		return (is_prime(n, (x + 1)));
}

/**
 * is_prime_number - determines if an int is prime
 * @n: int argument
 *
 * Return: 1 if n is prime
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime(n, 2));
}

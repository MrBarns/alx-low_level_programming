#include "main.h"

/**
 * binary_to_uint - convert string of binaries to int
 * @b: pointer to string
 *
 * Return: converted string if successful
 * 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base10;
	int count, index, len;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] < 48 || b[len] > 49)
			return (0);
	}

	if (len == 0)
		return (0);

	base10 = count = 0;
	index = len - 1 - count;

	while (index >= 0)
	{
		if (b[count] - 48 == 1)
		{
			base10 += power2(index);
		}
		count++;
		index--;
	}

	return (base10);
}

/**
 * power2 - raise 2 to a specified power
 * @index: power of 2
 *
 * Return: result of exponentiation
 */

unsigned int power2(int index)
{
	if (index == 0)
		return (1);

	return (2 * power2(index - 1));
}

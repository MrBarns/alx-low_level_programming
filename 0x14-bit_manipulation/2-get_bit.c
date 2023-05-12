#include "main.h"


/**
 * get_bit - get value of bit at a given index
 *
 * @n: unsigned long integer arg
 * @index: the given index
 *
 * Return: return value of n at index if successful, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ind = 0;

	if (index > 63)
		return (-1);
	while (ind < 64)
	{
		if (ind == index)
			return (n & 1);
		n >>= 1, ind++;
	}
	return (0);
}

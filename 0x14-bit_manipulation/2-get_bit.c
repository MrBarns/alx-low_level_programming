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
	while (n && index)
		n >>= 1, index--;

	if (index)
		return (-1);
	else
		return (n & 1);
}

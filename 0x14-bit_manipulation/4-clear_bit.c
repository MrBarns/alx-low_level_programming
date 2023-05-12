#include "main.h"


/**
 * clear_bit - clear the value of a bit to 1 at a given index
 *
 * @n: unsigned long int argument
 * @index: index to be set
 *
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

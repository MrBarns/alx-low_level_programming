#include "main.h"


/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: starting value
 * @m: ending value
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int flips = 0;

	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			flips++;
		xor >>= 1;
	}
	return (flips);
}

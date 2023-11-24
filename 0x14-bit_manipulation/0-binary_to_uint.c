#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binary numbers
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, bin_value = 1, ind;

	if (!b)
		return (dec);

	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if ((b[ind] < '0') || (b[ind] > '1'))
			return (dec);
		bin_value *= 2;
	}
	if (ind >= 33)
		return (dec);

	bin_value /= 2;
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind])
		{
			if (b[ind] - '0')
				dec += bin_value;
			bin_value /= 2;
		}
	}

	return (dec);
}

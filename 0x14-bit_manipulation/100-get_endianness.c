#include "main.h"


/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 1 for little endian, 0 otherwise
 */

int get_endianness(void)
{
	int num = 1;
	char *chr = (char *)&num;

	return (*chr);
}

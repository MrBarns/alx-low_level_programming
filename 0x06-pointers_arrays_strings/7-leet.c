#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int x, y;
	char s_lett[5] = {'a', 'e', 'o', 't', 'l'},
		num[5] = {'4', '3', '0', '7', '1'},
		b_lett[5] = {'A', 'E', 'O', 'T', 'L'};

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; y < 5; y++)
		{
			if ((*(s + x) == *(s_lett + y)) ||
			    (*(s + x) == *(b_lett + y)))
				*(s + x) = *(num + y);
		}
	}

	return (s);
}

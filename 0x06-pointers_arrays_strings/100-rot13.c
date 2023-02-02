#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int x, y;
	char sm_lett[] = "abcdefghijklmnopqrstuvwxyz",
		bg_lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int encode[] = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
			-13, -13, -13, -13, -13, -13, -13, -13, -13, -13, -13,
			-13, -13};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 27; y++)
		{
			if ((s[x] == sm_lett[y]) || (s[x] == bg_lett[y]))
			{
				s[x] += encode[y];
				break;
			}
		}
	}

	return (s);
}

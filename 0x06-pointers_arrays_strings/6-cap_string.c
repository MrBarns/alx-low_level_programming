#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	int x, y;
	char sep[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*str >= 97) && (*str <= 122))
		*str -= 32;

	x = 1;
	for (; *(str + x) != '\0'; x++)
	{
		for (y = 0; y < 13; y++)
		{
			if (*(str + x) == *(sep + y))
			{
				if ((*(str + x + 1) >= 97) &&
				    (*(str + x + 1) <= 122))
					*(str + x + 1) -= 32;
				break;
			}
		}
	}

	return (str);
}

#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string in question
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int x = 0;

	for (; *(str + x) != '\0'; x++)
	{
		if ((*(str + x) >= 97) && (*(str + x) <= 122))
			*(str + x) -= 32;
	}

	return (str);
}

#include <stdlib.h>
#include "main.h"

int _strlen(char *s, int x, int len);

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string if successful
 * NULL otherwise.
 */

char *argstostr(int ac, char **av)
{
	char *s, *s1, *s2;
	int len;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	len = _strlen(av[0], ac, 0);

	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
		return (NULL);

	s1 = s;
	s2 = av[0];

	while (ac > 0)
	{
		if (*s2 == '\0')
		{
			*s1 = '\n';
			ac--;
		}
		else
			*s1 = *s2;

		s1++;
		s2++;
	}

	return (s);
}


/**
 * _strlen - count length of array of strings
 *
 * @s: pointer to first element of array
 * @x: number of elements in array
 * @len: length of counted chars
 *
 * Return: length of array
 */

int _strlen(char *s, int x, int len)
{
	if (x == 0)
		return (len);

	if (*s == '\0')
		return (_strlen(s + 1, x - 1, len + 1));

	else
		return (_strlen(s + 1, x, len + 1));
}

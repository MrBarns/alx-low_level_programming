#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be added to s1
 *
 * Return: pointer to concatenated string
 * NULL otherwise
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, x, y = 0;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	con = malloc(sizeof(char) * (len1 + n + 1));

	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	for (x = 0; x < len1; x++)
		con[x] = s1[x];

	while (y < n)
	{
		con[x] = s2[y];
		x++;
		y++;
	}

	con[x] = '\0';
	return (con);
}

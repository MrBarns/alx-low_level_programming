#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string if successful
 * NULL otherwise
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int index1, index2;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Fine string lengths */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate size of concat based on lens of strings */
	con = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Output NULL if malloc fails */
	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	/* Copy first string */
	for (index1 = 0; index1 < len1; index1++)
		con[index1] = s1[index1];

	index2 = 0;

	/* Copy second string */
	while (!(index2 > len2))
	{
		con[index1] = s2[index2];
		index1++;
		index2++;
	}

	return (con);
}

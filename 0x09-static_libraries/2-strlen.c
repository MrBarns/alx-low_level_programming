/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: int representing the length of s
 *
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int back = 0;
	int forw = 0;
	char temp;

	/* Find Last Character */
	while (*(s + back) != '\0')
	{
		back++;
	}
	back--;

	/* Exchange characters */
	while (back > forw)
	{

		temp = *(s + forw);
		*(s + forw) = *(s + back);
		*(s + back) = temp;

		back--;
		forw++;

	}
}

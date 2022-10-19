/**
 *_islower - checks for lowercase character
 *
 *@c: The character to be checked
 *
 *Return: 1 if true
 *0 otherwise
 *
 */

int _islower(int c)
{
	int n;

	if (c >= 97 && c <= 122)
		n = 1;
	else
		n = 0;

	return (n);
}

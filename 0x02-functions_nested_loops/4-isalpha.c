/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter
 * 0 otherwise
 *
 */

int _isalpha(int c)
{
	int n;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		n = 1;
	else
		n = 0;

	return (n);
}

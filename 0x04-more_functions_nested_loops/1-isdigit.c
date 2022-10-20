/**
 * _isdigit - checks for a digit
 *@c: character to be checked
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 *
 */

int _isdigit(int c)
{
	int ret;

	if (c > 47 && c < 58)
		ret = 1;
	else
		ret = 0;

	return (ret);
}

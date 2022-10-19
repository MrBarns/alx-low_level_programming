/**
 * _abs - computes the absolute value of an integer
 *
 *@n: integer to be computed
 *
 *Return: absolute value of n
 *
 */

int _abs(int n)
{
	int r;

	if (n >= 0)
		r = n;
	else
		r = n * -1;

	return (r);
}

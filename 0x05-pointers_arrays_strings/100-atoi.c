/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer from string s if successful
 * 0 otherwise
 *
 */

int _atoi(char *s)
{
	unsigned int num = 0, len = 0, num_count = 0, tens = 1, x = 0, sign = 1;

	while (*(s + len) != '\0')
	{
		if ((*(s + len) < '0' || *(s + len) > '9') && num_count > 0)
			break;
		if (*(s + len) == '-')
			sign *= -1;
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			num_count++;
			if (num_count > 1)
				tens *= 10;
		}
		len++;
	}

	for (x = len - num_count; x < len; x++)
	{
		num += (*(s + x) - 48) * tens;
		tens /= 10;
	}

	return (num * sign);
}

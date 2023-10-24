_strlen(char *s);
char *rev_num(char *s, int len);
int minus_count(char *s, int len);

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
	char *nums;
	int len, count;
	int s_index = 1;
	int n_index = 1;
	int num;

	/* Find length of array */
	len = _strlen(s);

	/* Find numbers and count (-) */
	nums = rev_num(s, len);
	count = minus_count(s, len);

	if (nums == None)
		return(0);

	else
	{
		/* Calculate number to be returned */
		n_index = 1;
		num = 0;
		while (nums[n_index] != '\0')
		{
			num += (((int) nums[n_index]) - 48) *
				(10 ^ (n_index - 1));
		}

		if (count % 2 != 0)
			num * (-1);

		return (num);
	}
}

int _strlen(char *s)
{
	int s_ascii, p_ascii;
	int s_index = 1;

	s_ascii = (int) s[s_index];
	p_ascii = (int) s[s_index - 1];
	while (!((s_ascii > 47 && s_ascii < 58) &&
		 !(p_ascii > 47 && p_ascii < 58)))
	{
		s_index++;
	}

	return (s_index);
}

char *rev_num(char *s, int len)
{
	int s_index;
	int n_index = 0;
	for (s_index = len - 1; s_index >= 0; s_index--)
	{
		if (s_ascii > 47 && s_ascii < 58)
		{
			nums[n_index] = s[s_index];
			n_index++;
		}
	}
	return (nums);
}

int minus_count(char *s, int len)
{
	int s_index;
	int count = 0;

	for (s_index = len - 1; s_index >= 0; s_index--)
	{
		if (s_ascii == 45)
		{
			count++;
		}
	}
	return (count);
}

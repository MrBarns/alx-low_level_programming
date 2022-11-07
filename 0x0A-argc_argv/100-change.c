#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry function
 *
 * @argc: Number of function parameters
 * @argv: Vector of function parameters
 *
 * Return: success int if successful
 * failure int otherwise
 *
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		int amount = atoi(argv[1]);

		int coin[5] = {25, 10, 5, 2, 1};
		int n;
		int x;

		if (amount < 0)
		{
			printf("0\n");
			goto end;
		}
		n = x = 0;

		while (amount > 0)
		{
			if (amount >= coin[x])
			{
				n += amount / coin[x];
				amount %= coin[x];
			}
			x++;
		}

	printf("%d\n", n);
	}
end:;
	exit(EXIT_SUCCESS);
}

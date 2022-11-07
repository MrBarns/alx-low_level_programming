#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry function
 *
 * @argc: number of function args
 * @argv: vector of function args
 *
 * Return: success indicator
 *
 */

int main(int argc, char **argv)
{
	int x, y, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; y < (int) strlen(argv[x]); y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}

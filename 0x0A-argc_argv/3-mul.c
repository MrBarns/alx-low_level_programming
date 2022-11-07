#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 *
 * @argc: number of function arguments
 * @argv: vector of command line arguments
 *
 * Return: success message
 *
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		exit(EXIT_SUCCESS);
	}
}

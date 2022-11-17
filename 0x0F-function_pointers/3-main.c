#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry function
 *
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: int result of embedded function
 *
 */

int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	else
	{
		a = atoi(argv[1]);
		op = argv[2];
		b = atoi(argv[3]);

		func = get_op_func(op);

		if (func == NULL)
		{
			printf("Error\n");
			return (99);
		}

		printf("%d\n", func(a, b));
		return (0);
	}
}

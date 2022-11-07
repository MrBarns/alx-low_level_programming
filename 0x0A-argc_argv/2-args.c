#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 *
 * @argc: number of function arguments
 * @argv: vector of function arguments
 *
 * Return: success message
 *
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of program arguments
 * @argv: array of program arguments
 *
 * Return: success statement
 *
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

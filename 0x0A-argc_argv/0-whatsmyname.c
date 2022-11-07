#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of program arguments
 * @argv: pointer to program arguments
 *
 * Return: void
 *
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);

	exit(EXIT_SUCCESS);
}

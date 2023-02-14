#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of ints
 *
 * @a: pointer to first element of matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int *f_diagonal, *b_diagonal, f_sum, b_sum, count;

	f_diagonal = a;
	b_diagonal = a + (size - 1);
	f_sum = b_sum = 0;

	for (count = 0; count < size; count++)
	{
		f_sum += *f_diagonal;
		b_sum += *b_diagonal;

		f_diagonal += (size + 1);
		b_diagonal += (size - 1);
	}

	printf("%d, %d\n", f_sum, b_sum);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get function corresponding to op
 * @s: op
 *
 * Return: pointer to corresponding function
 * NULL otherwise
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			break;
		i++;
	}

	return (ops[i].f);
}

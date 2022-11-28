#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to a list_t list
 *
 * Return: number of nodes in list_t list
 */

size_t print_list(const list_t *h)
{
	size_t nodeNums = 0;
	list_t *next = h->next;

	if (h != NULL)
	{
		nodeNums = 1;
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		if (next)
		nodeNums += print_list(next);
	}

	return (nodeNums);
}

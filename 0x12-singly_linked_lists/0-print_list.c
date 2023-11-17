#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (null)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodeCount++;
	}

	return (nodeCount);
}

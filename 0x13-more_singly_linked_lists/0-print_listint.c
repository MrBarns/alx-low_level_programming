#include "lists.h"


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first element
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount;

	for (nodeCount = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodeCount++;
	}

	return (nodeCount);
}

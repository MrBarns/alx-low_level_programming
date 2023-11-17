#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head node of linked list_t list.
 *
 * Return: number of nodes in list.
 */

size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	for (; h != NULL; h = h->next)
		nodeCount++;

	return (nodeCount);
}

#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to first element
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCount;

	for (nodeCount = 0; h != NULL; h = h->next)
		nodeCount++;

	return (nodeCount);
}

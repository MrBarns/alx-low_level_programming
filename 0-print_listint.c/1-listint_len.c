#include "lists.h"

/**
 * listint_len - returns the number of linked elements in a list
 * @h: pointer to a listint_t list
 *
 * Return: number of linked elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != 0)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

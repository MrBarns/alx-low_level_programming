#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head pointer
 * @index: index to find
 *
 * Return: pointer to node at index if successful, NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind;
	dlistint_t *node = 0;

	for (ind = 0; ind <= index; ind++)
	{
		if (!head)
			return (node);

		if (ind != index)
			head = head->next;
	}

	node = head;
	return (node);
}

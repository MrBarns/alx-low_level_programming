#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: pointer to head pointer
 * @index: node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pre = 0, *curr;
	unsigned int ind;

	if (!(*head))
		return (-1);
	curr = *head;
	for (ind = 0; ind != index; ind++)
	{
		if (!curr)
			return (-1);

		pre = curr;
		curr = curr->next;
	}

	if (index == 0)
	{
		*head = curr->next;
	} else
		pre->next = curr->next;

	free(curr);
	if (pre && pre->next)
		pre->next->prev = pre;

	return (1);
}

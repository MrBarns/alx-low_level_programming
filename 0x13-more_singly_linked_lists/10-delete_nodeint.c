#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at given index of a listint_t
 * linked list
 *
 * @head: pointer to head node
 * @index: index of the node to be deleted. Starts at 0.
 *
 * Return: 1 on success. -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!(*head))
			return (-1);
		if (index - 1 == i)
			prev = (cur);
		cur = cur->next;
	}

	if (cur)
		return (-1);
	if (prev)
	{
		prev->next = cur->next;
		free(cur);
	} else
	{
		prev = cur->next;
		free(cur);
		*head = prev;
	}

	return (1);
}

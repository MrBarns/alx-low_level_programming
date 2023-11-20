#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to first node
 * @idx: index where the new node should be added. Starts at 0
 * @n: data of new node
 *
 * Return: the address of new node on success. NULL otherwise
 */

listint_t *insert_nodeint_at_index(
	listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = NULL, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < idx; i++)
	{
		if (!(*head))
		{
			free(new);
			return (NULL);
		}
		if (idx - 1 == i)
			prev = (*head);
		head = &((*head)->next);
	}
	new->n = n;
	new->next = (*head);
	if (prev)
		prev->next = new;
	else
		(*head) = new;

	return (new);
}

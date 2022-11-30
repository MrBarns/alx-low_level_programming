#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at specified index
 *
 * @head: pointer to address of first node
 * @idx: index where node should be added
 * @n: n value of new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new, *temp, *prev;

	count = 0;
	temp = *head;

	while (count < idx)
	{
		if (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
			count++;
		} else
			return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = temp;

	prev->next = new;

	return (new);
}

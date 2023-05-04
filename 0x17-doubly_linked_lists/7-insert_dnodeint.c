#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to head pointer
 * @idx: new node index
 * @n: int value of new node
 *
 * Return: address of the new node if successful, NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ind;
	dlistint_t *new, *prev = 0, *curr;

	curr = *h;

	for (ind = 0; ind <= idx; ind++)
	{
		if (!curr && ind != idx)
			return (0);

		if (ind != idx)
		{
			curr = curr->next;
			if (curr->prev)
				prev = curr->prev;
		}
	}

	if (idx == 0)
		new = add_dnodeint(h, n);
	else if (!curr)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			free(new);
			return (0);
		}

		new->n = n;
		new->next = curr;
		new->prev = prev;

		prev->next = new;
		curr->prev = new;
	}

	return (new);
}

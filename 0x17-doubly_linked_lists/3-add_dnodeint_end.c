#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to head pointer
 * @n: int value of dlistint_t node
 *
 * Return: address of the new element if successful, NULL otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	new->n = n;
	new->next = 0;
	if (end)
	{
		for (; end->next != NULL; end = end->next)
			;
		end->next = new;
	} else
		*head = new;

	new->prev = end;

	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnign of a dlistint_t list
 *
 * @head: pointer to head pointer
 * @n: int value of new node
 *
 * Return: address of new node if successful, NULL otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	new->n = n;
	new->next = *head;
	new->prev = 0;
	if (*head)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}

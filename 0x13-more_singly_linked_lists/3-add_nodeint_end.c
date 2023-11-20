#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to head node
 * @n: number to store in new node
 *
 * Return: address of new node if successful. NULL otherwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		for (; (*head)->next != NULL; head = &((*head)->next))
			;
		(*head)->next = new;
	}

	return (new);
}

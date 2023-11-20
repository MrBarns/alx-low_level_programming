#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to first element.
 * @n: number to store in new node
 *
 * Return: address of the new element on success. NULL otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

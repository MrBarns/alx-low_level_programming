#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (!head)
		return (NULL);

	next = *head;
	while (next)
	{
		*head = next;
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	return (*head);
}

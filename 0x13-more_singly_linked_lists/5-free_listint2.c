#include "lists.h"


/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next, *h = *head;

	if (*head != NULL)
		*head = NULL;

	for (; h != NULL; h = next)
	{
		next = h->next;
		free(h);
	}
}

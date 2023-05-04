#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nex;

	for (; head; head = nex)
	{
		nex = head->next;
		free(head);
	}
}

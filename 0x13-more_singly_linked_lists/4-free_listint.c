#include "lists.h"


/**
 * free_listint - frees a listint_t list
 * @head: first element of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	for (; head != NULL; head = next)
	{
		next = head->next;
		free(head);
	}
}

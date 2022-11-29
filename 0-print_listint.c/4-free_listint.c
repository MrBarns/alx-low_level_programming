#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to first element of list
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *present;

	while ((present = head) != NULL)
	{
		head = head->next;
		free(present);
	}
}

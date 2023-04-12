#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *prev;

	while (head)
	{
		if (head->str != NULL)
			free(head->str);
		prev = head;
		head = head->next;
		free(prev);
	}
}

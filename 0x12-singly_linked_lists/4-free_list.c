#include "lists.h"


/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next;

	for (; head != NULL; head = next)
	{
		next = head->next;
		free(head->str);
		free(head);
	}

	exit(EXIT_SUCCESS);
}

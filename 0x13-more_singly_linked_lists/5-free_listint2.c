#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to first element
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;

	if (temp == NULL)
		goto end;

	while ((current = temp) != NULL)
	{
		temp = temp->next;
		free(current);
	}

	*head = NULL;
end:;

}

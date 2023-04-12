#include "lists.h"


/**
 * add_node_end - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to head
 * @str: to be duplicated
 *
 * Return: address of the new element if successful
 * NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *strcpy;
	unsigned int lent;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	if (str == NULL)
	{
		new->str = 0;
		new->len = 0;
	} else
	{
		strcpy = strdup(str);
		if (strcpy == NULL)
		{
			free(strcpy);
			free(new);
			return (0);
		}
		for (lent = 0; strcpy[lent] != '\0'; lent++)
			;

		new->str = strcpy;
		new->len = lent;
	}
	new->next = 0;
	if (*head == NULL)
		*head = new;
	else
	{
		while ((*head)->next != NULL)
			head = &((*head)->next);
		(*head)->next = new;
	}
	return (new);
}

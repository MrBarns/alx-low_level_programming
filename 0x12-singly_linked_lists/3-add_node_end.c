#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: address of pointer to head node.
 * @str: string to store in new node.
 *
 * Return: address of new element on success, NULL otherwise.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (str)
	{
		new_str = strdup(str);
		if (new_str == NULL)
		{
			free(new_str);
			free(new_node);
			return (NULL);
		}
	} else
		new_str = NULL;

	if (str)
		for (len = 0; new_str[len] != '\0'; len++)
			;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else
	{
		for (; (*head)->next != NULL; head = &((*head)->next))
			;
		(*head)->next = new_node;
	}
	return (new_node);
}

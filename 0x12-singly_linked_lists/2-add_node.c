#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: address of pointer to head node
 * @str: string to store in new node.
 *
 * Return: address of new node if successful, NULL otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		free(new_node);
		return (NULL);
	}

	for (len = 0; new_str[len] != '\0'; len++)
		;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

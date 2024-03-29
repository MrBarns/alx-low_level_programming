#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: head node of list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to node if it exists. NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	if (head)
		return (head);
	return (NULL);
}

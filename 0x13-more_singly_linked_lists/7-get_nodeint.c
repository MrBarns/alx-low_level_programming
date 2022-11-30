#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer to first index
 * @index: nth node
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		if (head->next != NULL)
		{
			head = head->next;
			count++;
		} else
			return (NULL);
	}

	return (head);
}

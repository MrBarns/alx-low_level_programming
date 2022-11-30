#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at specified index of linked list
 *
 * @head: pointer to address of first node
 * @index: index of node to be deleted
 *
 * Return: 1 if successful
 * -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev;

	temp = *head;
	count = 0;

	if (temp == NULL)
		return (-1);

	if (index > 0)
	{
		while (count < index)
		{
			if (temp->next != NULL)
			{
				prev = temp;
				temp = temp->next;
				count++;
			} else
				return (-1);
		}

		prev->next = temp->next;
		free(temp);
		return (1);
	}

	prev = temp->next;
	*head = prev;
	free(temp);

	return (1);
}

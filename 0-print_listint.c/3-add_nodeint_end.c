#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 *
 * @head: pointer to address of first element
 * @n: value of new element.n
 *
 * Return: address of the new element if successful
 * NULL otherwise
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new;
	}

	return (*head);
}

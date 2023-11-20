#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (*head == NULL)
	{
		n = 0;
		next = NULL;
	}
	else
	{
		next = (*head)->next;
		n = (*head)->n;
	}
	free(*head);
	*head = next;

	return (n);
}

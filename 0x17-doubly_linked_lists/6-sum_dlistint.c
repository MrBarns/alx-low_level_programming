#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head pointer
 *
 * Return: sum of list data
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	for (; head; head = head->next)
		total += head->n;

	return (total);
}

#include "lists.h"


/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first element of list
 *
 * Return: Sum of data in list.
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}

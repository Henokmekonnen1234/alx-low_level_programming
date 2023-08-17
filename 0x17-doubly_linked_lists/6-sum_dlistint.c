#include "lists.h"

/**
 * sum_dlistint - sums elements of a doubly linked list
 * @head: head of the doubly linked list
 *
 * Return: the sum of values of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

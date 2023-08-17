#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the doubly linked list
 * Return: the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}

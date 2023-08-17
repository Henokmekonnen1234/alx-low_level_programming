#include "lists.h"

/**
 * dlistint_len - gets the size of a doubly linked list
 * @h: head of the doubly linked list
 *
 * Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

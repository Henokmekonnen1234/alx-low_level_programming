#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node a the given index of a
 * doubly linked list
 * @h: pointer to head of the doubly linked list
 * @idx: the index to insert the element
 * @n: data to be added
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp_h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp_h = *h;
	for (i = 0; i < idx && temp_h != NULL; i++)
		temp_h = temp_h->next;

	if (temp_h == NULL)
		return (i == idx ? add_dnodeint_end(h, n) : NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = temp_h->prev;
	node->next = temp_h;
	temp_h->prev->next = node;
	temp_h->prev = node;

	return (node);
}

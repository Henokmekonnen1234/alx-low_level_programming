#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index of a dlist
 * @head: head of the doubly linked list
 * @index: the index of the element
 *
 * Return: the node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}

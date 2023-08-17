#include "lists.h"

/**
 * add_dnodeint_end - adds a node a the end of a doubly linked list
 * @head: pointer to head of the doubly linked list
 * @n: data to be added
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp_h;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	temp_h = *head;
	if (temp_h != NULL)
	{
		while ((temp_h)->next != NULL)
			temp_h = temp_h->next;

		temp_h->next = node;
		node->prev = temp_h;
	}
	else
		*head = node;
	return (node);
}

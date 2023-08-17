#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the doubly linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);

		free(head);
	}
}

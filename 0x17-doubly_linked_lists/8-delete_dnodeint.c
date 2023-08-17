#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a dlist
 * @head: head of the doubly linked list
 * @index: the index of the element
 *
 * Return: the 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *temp;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		for (i = 0; i < index && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return (-1);

		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}

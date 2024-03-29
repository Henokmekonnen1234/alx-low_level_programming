#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	insert_dnodeint_at_index(&head, 0, 1111);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 222);
	print_dlistint(head);
	printf("-----------------\n");

	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 333);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 11, 444);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 15, 555);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}

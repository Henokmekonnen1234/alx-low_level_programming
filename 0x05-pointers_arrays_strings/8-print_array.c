#include "main.h"
#include <stdio.h>

/**
 * print_array - print the value of an array
 * @a: int pointer
 * @n: siz of array v
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
}

#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a: int pointer type
 * @b: int pointer type
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

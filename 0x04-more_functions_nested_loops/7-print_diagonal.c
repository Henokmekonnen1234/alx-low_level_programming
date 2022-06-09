#include "main.h"

/**
 * print_diagonal - prints n number of _
 * @n: int type
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0 ; a < n ; a++)
		{
			for (j = 0 ; j < a ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}


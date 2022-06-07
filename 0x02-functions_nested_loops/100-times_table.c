#include "main.h"

/**
 * print_times_table - prints table
 *@n: int type accept a value
 *
 * Describtion: n accept avalue and prints
 *  multiplication table
 * Return: 0
 */
void print_times_table(int n) /* n accept a value */
{
	int i, j, mul;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; i++)
		{
			mul = i * j;
			_putchar(mul);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

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
			if (j == 0)
					_putchar('0' + mul);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (mul <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + mul);
					}
					else if (mul > 9 && mul < 100)
					{
						_putchar(' ');
						_putchar('0' + (mul / 10));
						_putchar('0' + (mul % 10));
					}
					else if (mul >= 100)
					{
						_putchar('0' + (mul / 100));
						_putchar('0' + ((mul / 10) % 10));
						_putchar('0' + (mul % 10));
					}
				}
		}
	}
	_putchar('\n');
}

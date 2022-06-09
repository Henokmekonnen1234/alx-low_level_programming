#include "main.h"

/**
 * print_most_numbers - print with or without 2 or 4
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}

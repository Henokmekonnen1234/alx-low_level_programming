#include "main.h"

/**
 * print_numbers - prints int from 1 - 10
 * Return: 0
 */
void print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar(10);

}

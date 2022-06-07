#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: int type
 * Return: int
 */

int print_last_digit(int n)
{
	int nn = 0;

	if (n < 0)
		n *= -1;

	nn = n % 10;
	_putchar('0' + nn);

	return (n % 10);
}

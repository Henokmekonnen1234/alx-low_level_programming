#include "holberton.h"

/**
 * _isalpha - checks for alphabet character
 * @c: char type
 * Return: int type
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

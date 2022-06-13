#include "main.h"
#include <stdio.h>

/**
 * _puts - prints strings
 * @str: char type pointer
 * Return: 0
 */
void _puts(char *str)
{
	while ( *str != '\0')
	{
		puts(str);
		str++;
	}
}

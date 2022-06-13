#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints reverse of string
 * @s: pointer to char
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints left one in the middle
 * @str: pointer to char
 * Return: 0
 */
void puts2(char *str)
{
	int j;

	j=0;
	while (j <= (strlen(str) - 1))
	{
		printf("%c", str[j]);
		j += 2;
	}
	printf("\n");


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
	int j, len;

	j = 0;
	len = strlen(str) - 1;
	while (j <= len)
	{
		printf("%c", str[j]);
		j += 2;
	}
	printf("\n");
}

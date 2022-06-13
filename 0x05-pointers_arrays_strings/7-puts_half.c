#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints last half of the string
 * @str: pointer to char
 * Return: 0
 */
void puts_half(char *str)
{
	int len, half_len;

	len = strlen(str) - 1;
	half_len = len / 2;

	while (half_len <= len)
	{
		printf("%c", str[half_len]);
		half_len++;
	}
	printf("\n");
}

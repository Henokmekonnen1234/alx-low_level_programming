#include "main.h"

/**
 * _strlen - counts the length of string
 * @s: char ponter typr
 * Return: int counter
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

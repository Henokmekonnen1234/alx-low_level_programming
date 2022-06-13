#include "main.h"

int _strlen(char *s)
{
	int counter;

	while(*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

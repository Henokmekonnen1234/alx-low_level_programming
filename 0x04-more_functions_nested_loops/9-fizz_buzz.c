#include <stdio.h>
#include "main.h"

/**
 * fuzzbuzz - fizzbuzz puslw
 * Return: 0
 */
void fuzzbuzz(void)
{
	int i;

	i = 0;
	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - fizzbuzz puslw
 * Return: 0
 */
void main(void)
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
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *n: int value
 *
 *Description: n is signed int and it can store
 *negative ,positive or zore then randome value
 *assigned to it and the conditional if statement
 *will tell as whether the value is positive ,
 *negative or zer
 *main function is initisialiazation of file
 *Return 0 (Success)
 */
int main(void)
{
	signed int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}

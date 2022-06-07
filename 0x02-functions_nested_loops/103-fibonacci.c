#include <stdio.h>

/**
 * main - entry point
 * a,b,sum: long type
 *
 *Description: print only even fibonacci
 *Return: 0
 */
int main(void)
{
	long a = 1, b = 1, sum = 0;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			printf("%l, ", sum);
		}
		sum = a + b;
		b = a;
		a = sum;
	}
	printf("\n");
	return (0);
}

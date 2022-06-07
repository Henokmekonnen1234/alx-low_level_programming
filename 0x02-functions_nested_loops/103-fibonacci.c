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
	unsigned long a = 1, b = 1, sum = 0, value;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			value += sum;
		}
		sum = a + b;
		b = a;
		a = sum;
	}
	printf("%lu\n",value);
	return (0);
}

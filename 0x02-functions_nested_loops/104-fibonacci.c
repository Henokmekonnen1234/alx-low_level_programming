#include <stdio.h>

/**
 * main - Entry point
 * a,num,sum,b:int type
 *
 * Description:  print fibonacci 98
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count, long_num;
	unsigned long a = 1, b = 1, sum = 0;
	long a_1, a_2, b_1, b_2, sum_1, sum_2;

	printf("1");

	for (count = 2; count < 93; count++) 
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_1 = a / 1000000000;
	a_2 = a % 1000000000;
	b_1 = b / 1000000000;
	b_2 = b % 1000000000;

	for (; count < 99; count++)
	{
		long_num = (a_2 + b_2) / 1000000000;
		sum_2 = (a_2 + b_2) - (1000000000 * long_num);
		sum_1 = (a_1 + b_1) + long_num;

		printf(", %lu%lu", sum_1, sum_2);

		a_1 = b_1;
		a_2 = b_2;
		b_1 = sum_1;
		b_2 = sum_2;
	}

	printf("\n");
	return (0);
}

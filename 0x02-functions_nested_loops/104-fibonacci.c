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
	signed long int a = 1, num = 1, sum = 1, b = 1, long_num;
	long a_1, a_2, b_1, b_2, sum_1, sum_2;

	while (a < 93)
	{
		printf("%ld, ",sum);
		sum = num + b;
		b = num;
		num = sum;
		a++;
	}

	a_1 = num / 1000000000;
	a_2 = num % 1000000000;
	b_1 = b / 1000000000;
	b_2 = b % 1000000000;

	for (; a < 99; a++)
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

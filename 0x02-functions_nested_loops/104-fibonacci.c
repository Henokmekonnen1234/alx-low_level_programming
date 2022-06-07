#include <stdio.h>
void fibonacci(void);
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
	signed long int a = 1, num = 1, sum = 1, b = 1;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	while (a <= 98)
	{
		printf("%ld, ",sum);
		sum = num + b;
		b = num;
		num = sum;
		a++;
	}

	a_head = b / 1000000000;
	a_tail = b % 1000000000;
	b_head = a / 1000000000;
	b_tail = a % 1000000000;

	for (; counter < 99; counter++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}
	printf("\n");
	return (0);
}

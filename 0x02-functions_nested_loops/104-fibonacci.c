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
	unsigned long  a = 1, num = 1, sum = 1, b = 1;

	while (a <= 98)
	{
		printf("%lu, ", sum);
		sum = num + b;
		b = num;
		num = sum;
		a++;
	}
	printf("\n");
	return (0);
}

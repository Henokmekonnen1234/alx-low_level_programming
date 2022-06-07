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
	unsigned long int a = 1, num = 1, sum , b = 2;
	while (a <= 98)
	{
		sum = num + b;
		b = num;
		num = sum;
		printf("%ld, ",sum);
		a++;
	}
	printf("\n");
	return (0);
}

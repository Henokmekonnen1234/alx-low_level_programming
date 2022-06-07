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
	int a = 1, num = 1, sum = 1, b = 1;

	do {
		printf("  %u, ", sum);
		sum = num + b;
		b = num;
		num = sum;
		a++;
	} while (a <= 98);
	printf("\n");
	return (0);
}

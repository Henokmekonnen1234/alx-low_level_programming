#include <stdio.h>

/**
 * main - entry point
 *sum,count: int type
 *
 *Description: prints the sum multiple of
 * 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int sum = 0, count = 0;

	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
			sum += count;
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

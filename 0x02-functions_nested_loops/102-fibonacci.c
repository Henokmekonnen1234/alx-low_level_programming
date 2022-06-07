#include <stdio.h>

/**
 *main -  entry point
 *count,n,b,sum: variables
 *
 *Descritpion: prints out fibonacci 50
 *Return: 0
 */
int main(void)
{
	int count = 0;
	long a = 1, b = 1, sum = 1;

	while (count < 50)
	{
		printf("%ld", sum);
		sum = a + b;
		a = b;
		b = sum;
		count++;
		if (count != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

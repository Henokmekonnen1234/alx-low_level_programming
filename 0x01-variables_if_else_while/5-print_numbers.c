#include <stdio.h>

/**
 * main - Entry point
 * i: int value
 *
 * Description:prints out form 1 to 9
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}

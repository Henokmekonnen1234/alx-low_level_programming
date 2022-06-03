#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *a: char type
 *c: int type
 *
 * Description: a save the first alphabet and prints out lower
 * case alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a', b = 'A';
	int c = 0;

	while (c <= 25)
	{
		putchar(a++);
		c = c + 1;
	}

	while (c <= 51)
	{
		putchar(b++);
		c = c + 1;
	}

	putchar('\n');
	return (0);
}


#include <stdio.h>

/**
 * main - Entry point
 * a: char type
 * b: int type
 *
 * Describe: print out lowercase alphabet
 * except p and e
 * Return: 0 (success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}

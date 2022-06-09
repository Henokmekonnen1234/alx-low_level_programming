#include "main.h"

/**
 * more_numbers - prints 1-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	char i, j, x;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			_putchar(j);
			if (j == '9')
			{
				for (x = 0 ; x <= '4' ; x++)
				{
					_putchar(x);
				}
			}
		}
		_putchar('\n');
	}
}

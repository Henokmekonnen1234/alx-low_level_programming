#include "main.h"

/**
 * print_square - prints n number of # in square
 * @n: int type
 * Return: 0
 */
void print_square(int n)
{
        int a, j;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (a = 0 ; a < n ; a++)
                {
                        for (j = a ; j > 0 ; j--)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
}

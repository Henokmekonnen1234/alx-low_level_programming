#include "main.h"

/**
 * print_line - prints n number of _
 * @n: int type
 * Return: 0
 */
void print_diagonal(int n)
{
        int a;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (a = 0 ; a < n ; a++)
                {
                        _putchar('\\');
                }
                _putchar('\n');
        }
}


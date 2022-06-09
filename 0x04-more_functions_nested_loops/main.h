#ifndef MAIN_H_
#define MAIN_H_

/**
 * _isupper - checks the character if its upper case or
 * not
 * @c: Accepts char value
 * Return: int type
 */

int _isupper(int c);

/**
 * _isdigit - checks char is digit or not
 * @c: char value
 * Return: int type
 */

int _isdigit(char c);

/**
 * mul - return multiply of two int
 * @a: first integer
 * @b: second integer
 * Return: multiplication of int
 */

int mul(int a, int b);

/**
 * print_numbers - prints int form 0 - 10
 * Return: 0 (success)
 */

void print_numbers(void);

/**
 * _putchar - returns putchar
 * @i: int type
 * Return: putchar
 */

int _putchar(char i);

/**
 * print_most_numbers - prints int from 1-9 except 2 and 4
 * Return: 0 (success)
 */

void print_most_numbers(void);

/**
 * more_numbers - print 1-14 10 times
 * Return: 0
 */
void more_numbers(void);

/**
 * print_line -  prints n number of _
 * @n: char type
 * Return: 0
 */

void print_line(int n);

/**
 * print_diagonal -  prints n number of _
 * @n: char type
 * Return: 0
 */

void print_diagonal(int n);

/**
 * print_square - prints # in square formation
 * @n: int type
 * Return: 0
 */

void print_square(int n);

/**
 * print_triangle - ptints triangle
 *@n: int type
 *Return: 0*/

void print_triangle(int n);

/**
 * fizzbuzz - fizzbuzz puslw
 * Return: 0
 */

void fizzbuzz(void);

#endif

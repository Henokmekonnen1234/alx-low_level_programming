#ifndef  MAIN_H_
#define  MAIN_H_

/**
 * reset_to_98 - reset a value of n to 98
 * @n: int pointer type
 * Return: 0
 */

void reset_to_98(int *n);

/**
 * swap_int - swap the value of a and b
 * @a: int pointer type
 * @b: int pointer type
 * Return:0
 */

void swap_int(int *a, int *b);

/**
 * _strlen - counts the length o string
 * @s: char pointer type
 * Return: int counter
 */

int _strlen(char *s);

/**
 * _puts - prints string 
 * @str: char pointer type
 * Return: 0
 */
void _puts(char *str);

/**
 * print_rev - print reverse of string
 * @s: pointer to char
 * Return: 0
 */

void print_rev(char *s);

/**
 * puts2 - prints jump one in the middle
 * @str: char pointer
 * Return: 0
 */

void puts2(char *str);

/**
 * puts_half - prints last half of string
 * @str: pointer to char
 * Return: 0
 */

void puts_half(char *str);

#endif


#ifndef  MAIN_H_
#define  MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)


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

/**
 * print_array - print the value of an array
 * @a: int pointer
 * @n: siz of array v
 * Return: 0
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);


/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)

#endif


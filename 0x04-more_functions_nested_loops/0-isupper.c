#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks the char value
 * @c: accepts char value
 *
 * Description: accepts character value and 
 * checks whether it is upper case or not
 * Return: int value
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

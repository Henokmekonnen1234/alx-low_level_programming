#include "main.h"

/**
 * _isupper - checks the char value
 * @c: accepts char value
 *
 * Description: accepts character value and 
 * checks whether it is upper case or not
 * Return: int value
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

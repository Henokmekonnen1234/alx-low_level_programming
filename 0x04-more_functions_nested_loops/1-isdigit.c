#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks a char its digit or not
 * @c: accept value
 * Return: int type
 */
int _isdigit(char c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

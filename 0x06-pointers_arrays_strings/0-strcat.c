#include "main.h"

/**
 * _strcat - appends dest to src
 * @dest: char pointer type
 * @src: char pointer type
 * Return: cahr pointer
 */
char *_strcat(char *dest, char *src)
{
        int i = 0;
	int j = 0;
	while (*(dest + i))
	   i++;
	while (*(src + j))
	{
	   *(dest+i) = *(src+j);
	   i++;
	   j++;
	}
	*(dest+i) = '\0';
	return (dest);
}

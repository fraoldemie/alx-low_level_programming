#include "main.h"
#include "stdio.h"

/**
 * _strcpy - copies a string from one pointer to the other
 *
 * @src: the pointer to the source location of the string
 *
 * @dest: the pointer to the destination of the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char* src)
{
	int i = 0;
	
	while (*(src+i) != '\0')
	{
		*(dest+i) = *(src+i);
		i++;
	}
	return dest;
}

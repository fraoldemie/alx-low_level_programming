#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies a given number of bytes from one memory area to another
 *
 * @sr: a pointer to the source memory area
 *
 * @dest: a pointer to the destination memory area
 *
 * @n: the number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
		
	
 

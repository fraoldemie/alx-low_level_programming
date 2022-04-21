#include "main.h"
#include "stdio.h"

/**
 * _strncat - copys a given number of characters from one string to the other
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * @n: the number of characters to be copied
 *
 * Return: pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < n; j++)
	{
		dest[len] = src[j];
		len++;
	}
	return (dest);
}
	
   

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
	
	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++
	}
	if (src[j] == '\0')
	{
		while (len < n)
		{
			dest[len] = '\0';
		}
	}
	return (dest);
}
	
   

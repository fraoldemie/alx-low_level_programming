#include "main.h"

/**
 * strcat - concatenates two strings
 *
 * @src: first input string
 *
 * @dest: second input string
 *
 * Return: concatenated string
 */
char * _strcat(char *dest, char *src)
{
	int len;
	int j = 0;
	
	for(len = 0; *(dest + len) != '\0'; len++)
	{
	}
	while (*(src + j) != '\0')
	{
		*(dest + len + j) = *(src + j);
		j++;
	}
	*(dest + len + j) = '\0';
	return (dest);
}
		
		

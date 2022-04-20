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
	int i;
	int len = 0;
	int j = 0;
	
	for(i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + len + j - 1) = *(src + j);
		j++;
	}
	*(dest + len + j) = '\0';
	return (dest);
}
		
		

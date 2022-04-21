#include "main.h"

/**
 * strcat - concatenates two strings
 *
 * @src: first input string
 *
 * @dest: second input string
 *
 * Return: pointer to concatenated string
 */
char * _strcat(char *dest, char *src)
{
    	int i;
	int len = 0;
	int len2 = 0;
	int j;
	 
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	while(dest[len + j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (&dest);
}
		
		

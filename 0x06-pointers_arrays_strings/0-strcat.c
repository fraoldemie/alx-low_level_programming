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
char *_strcat(char *dest, char *src)
{
    	int i;
	int len = 0;
	int len2 = 0;
	int j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		len2++;
	}
	char result[len + len2 + 1];
	for (i = 0; result[i] != '\0'; i++)
	{
	    result[i] = dest[i];
	}
	
	while(j < len + len2)
	{
		result[len + j] = src[j];
		j++;
	}
	result[len + j] = '\0';
	return (&result);
}
		
		

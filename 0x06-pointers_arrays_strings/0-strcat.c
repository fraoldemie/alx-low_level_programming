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
	int len2 = 0;
	int j;
	 
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		len2++;
	}
	char result[len + len2 + 1];
 /* 	for (i = 0; i < len; i++)
	{
		result[i] = dest[i];
	}
	for (j = 0; result[len + j] != '\0'; j++)
	{
		result[len + j] = src[j];
	}
	result[len + len2] = '\0';
*/
	return (result);
}
		
		

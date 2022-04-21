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
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len2++;
	}
	char result[len + len2 + 1];
	for (i = 0; i
	for (i = 0; i < n; i++)
	{
		result[len + i] = src[i];
	}
	
   

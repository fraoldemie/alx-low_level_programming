#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies n elements of a given string to another string
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * @n: the number of elements to be copied
 *
 * Return: the resulting string
 */
 char *_strncpy(char *dest, char* src, int n)
 {
	 char *R;
	 int i;
	 
	 R = &dest;
	 i = 0;
 	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	 return (R);
 }
	
#include "main.h"

/**
 * _memset - fills up a given number of memory locations with a given pointer
 *
 * @s: the starting location of the memory adresses to be filled
 *
 * @b: the character whose pointer we use to fill up the adresses
 *
 * @n: the number of memory locations to be filled
 *
 * Return: the pointer to the filled up memory locations
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	} 
	return s;
}

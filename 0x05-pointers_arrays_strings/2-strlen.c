#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string whose length is to be computed
 * Return: the length of the given string 
 */
int _strlen(char *s)
{
	int count;
	int i;
	
	count = 0;
	
	for( i = 0; *(s+i) != '\0'; i++)
	{
		count++;
	}
	return count;
}
	
	
	
		
	

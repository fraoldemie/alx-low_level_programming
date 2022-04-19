#include "main.h"
#include "stdio.h"

/**
 * print_rev - prints the given string in reverse
 *
 * @s: the string to be printed in reverse
 *
 * Return: (0)
 */
void print_rev(char *s)
{
	int len;
	int i;
	int j;
	
	len = 0;
	
	for( i = 0; *(s+i) != '\0'; i++)
	{
		len++;
	}
	for( j = len-1; j == 0; j--)
	{
		putchar(*(s+j));
	}
	putchar('\n');
}
	
	

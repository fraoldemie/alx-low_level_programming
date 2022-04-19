#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @str: the pointer pointing to where the string to be printed is located
 *
 * Return: (0)
 */
void _puts(char *str)
{
	int i;
	
	for( i = 0; *(str+i) == '\0'; i++)
	    {
		    putchar(*(str+i));
	    }
	    putchar('\n');
}
	    

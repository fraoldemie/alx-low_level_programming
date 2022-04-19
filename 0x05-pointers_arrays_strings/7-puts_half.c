#include "main.h"
#include "stdio.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the input string
 *
 *Return: (0)
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	
	for(i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for(i = (len - 1)/2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

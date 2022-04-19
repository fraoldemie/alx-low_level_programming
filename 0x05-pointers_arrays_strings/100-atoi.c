#include "main.h"
#include "stdio.h"

/**
 * _atoi - converts the digits in a string into an integer
 *
 * @s: the input string
 *
 * Return: the int value
 *
 */
int _atoi(char *s)
{
	int R = 0;
	int i = 0;
	int sign = 0;
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
			R = 1;
		if (R == 0 && *(s + i) == 45)
		
	
	
	

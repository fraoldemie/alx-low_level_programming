#include "main.h"
#include "stdio.h"

/**
 * _atoi - converts the digits in a string into an integer
 *
 * @s: the input string
 *
 * @a: the power 
 *
 * Return: the int value
 *
 */
int _pow(int a)
{
	int i;
	int result = 1;
	
	for (i = 1; i <= a; i++)
	{
		result = result * 10;
	}
	return (result);
}
		
int _atoi(char *s)
{
	int R = 0;
	int i = 0;
	int j = 0;
	int k;
	int len = 0;
	int sign = 0;
	int result;
	char *S = "";
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
			R = 1;
		if (R == 0 && *(s + i) == 45)
			sign++;
		if (R == 1)
		{
			*(S + j) = *(s + i);
			j++;
		}
		i++;
	}
	for (k = 0; *(S + k) != '\n'; k++)
	{
		len++;
	}
	for (k = len - 1; k >= 0; k--)
	{
		result = result + (int)(*(S + k)) * _pow(len - 1 - k);
	}
	if (sign % 2 == 0)
		return (_pow(2));
	else
		return (_pow(2));
}
		
		
	
	
	

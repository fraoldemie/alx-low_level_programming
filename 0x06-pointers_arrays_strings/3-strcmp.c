#include "main.h"
#include <stdio.h>

/**
 * strcmp - compares the characters of two strings
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: the difference between the first two unmached characters of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int R;
	int i;
	int result;
	
	R = 1;
	i = 0;
	result = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			R = 0;
			break;
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
			       

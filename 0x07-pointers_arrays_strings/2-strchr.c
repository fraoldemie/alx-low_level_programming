#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 *
 * @s: the string to be searched
 *
 * @c: the character to be searched
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int R = 0;
	int *C;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			R = 1;
			C = &c;
			break;
		}
	}
	if (R == 1)
		return (C);
	return (NULL);
}

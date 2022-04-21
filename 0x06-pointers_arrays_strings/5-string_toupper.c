#include "main.h"

/**
 * string_toupper changes the lower case characters of a string to upper case
 *
 * @str: the input string
 *
 * Return: the string with all uppercase characters
 */
char *string_toupper(char *hi)
{
	for (i = 0; hi[i] != '\0'; i++)
	{
		if (hi[i] >= 'a' && hi[i] <= 'A')
		{
			hi[i] = hi[i] - ('a' - 'A');
		}
	}
	return (hi);
}

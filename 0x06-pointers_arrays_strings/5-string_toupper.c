#include "main.h"

/**
 * string_toupper changes the lower case characters of a string to upper case
 *
 * @str: the input string
 *
 * Return: the string with all uppercase characters
 */
char *string_toupper(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'A')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}

#include "main.h"

/**
 * string_toupper changes the lower case characters of a string to upper case
 *
 * @str: the input string
 *
 * Return: the string with all uppercase characters
 */
char *string_toupper(char *)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

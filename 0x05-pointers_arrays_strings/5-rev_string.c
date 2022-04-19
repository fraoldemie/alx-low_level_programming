#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: (0)
 */
void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	len = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i <= (len - 1) / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len -  1 - i) = tmp;
	}
}

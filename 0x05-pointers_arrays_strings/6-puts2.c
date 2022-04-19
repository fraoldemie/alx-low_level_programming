#include "main.h"
#include "stdio.h"

/**
 * puts2 - prints every other character in astring
 *
 * @s: the input string
 *
 * Return: (0)
 */
void puts2(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(*(s + i));
	}
	putchar('\n');
}

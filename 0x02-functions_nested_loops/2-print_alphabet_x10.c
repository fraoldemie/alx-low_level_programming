#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase, 10 times
 * Return : Always return 0
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;

	while (i < 10)
	{	
  		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	        _putchar('\n');
		i++;
	}
}

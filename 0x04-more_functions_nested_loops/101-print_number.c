#include "main.h";

/**
 * print_number - prints a given integer
 *
 * @n: the integer to be printed
 * Return: (0)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/*while (n > 0)
	{
		_putchar (n % 10);
		n = n / 10;
	}
	*/
	if (n / 10 > 0)
		print_number( n / 10);
	
	_putchar((n % 10) + '0');
}

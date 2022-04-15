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
		putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		putchar ( n % 10);
		n = n / 10;
	}
}

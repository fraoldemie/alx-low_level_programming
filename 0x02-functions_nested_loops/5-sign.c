#include "main.h"
/**
 *print_sign - checks for the sign of a number.
 *
 * @n: input number
 *
 * Return: the sign of the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

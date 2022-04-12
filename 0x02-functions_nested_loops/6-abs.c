#include "main.h"
#include <stdio.h>

/**
 * _abs - returns the absolute value of a number
 *
 * @n: number whose absolute value is to be found
 *
 * Return: absolute value of the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

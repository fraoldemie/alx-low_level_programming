#include "main.h"
/**
 * _sign - checks for the sign of a number.
 *
 */
int _sing(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if(n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('48');
		return(0);
	}
}

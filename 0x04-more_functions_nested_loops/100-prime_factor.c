#include "main.h"
/**
 * prime_factor - computes the largest prime factor of a number
 * 
 * @c: the number whose prime factor is to be calculated
 *
 * Return: the largest prime factor of the number
 */
int prime_checker(int n)
{
	int R = 1;
	
	for (int i = n; i > 1; i--) 
	{
		if ( n % i == 0)
		{
			R = 0;
			break;
		}
	}
	
	if ( R == 1) 
	{
		return (1);
	}
	else
		return (0);
}

int prime_factor(int c)
{
	int i;
	
	int p_f;
	
	i = c - 1;
	
	while (i > 0)
	{
		if ((c / i) % == 0 && prime_checker(i) == 1)
		{
			p_f = i;
			break;
		}
		
		i--;
	}
	printf (p_f);
	return p_f;
}
			
			
			

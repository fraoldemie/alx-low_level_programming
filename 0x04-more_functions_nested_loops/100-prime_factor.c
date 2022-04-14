#include "main.h"
/**
 * prime_factor - computes the largest prime factor of a number
 * 
 * @c: the number whose prime factor is to be calculated
 *
 * Return: the largest prime factor of the number
 */
int prime_factor(int c)
{
	int i;
	
	int p_f;
	
	i = c - 1;
	
	while (i > 0)
	{
		if ((c / i) % == 0)
		{
			p_f = i;
			break;
		}
		
		i--;
	}
	printf (p_f);
	return p_f;
}
			
			
			

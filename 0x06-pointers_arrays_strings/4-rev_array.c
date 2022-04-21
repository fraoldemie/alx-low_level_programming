#include "main.h"
#include "stdio.h"

/**
 * rev-array - reverses a given array
 *
 * @a: the array to be reversed
 *
 * @n: the length of the arrray
 *
 * Return: (0)
 */
void reverse_array(int *a, int n)
{
	int i;
    	int tmp;

	for (i = 0; i <= n/2; i++)
	{
	    tmp = a[i];
	    a[i] = a[n - 1 - i];
	    a[n - 1 - i] = tmp;
	}
}
  
  

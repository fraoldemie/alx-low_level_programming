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
    	int tmp[n];

	for (i = 0; i < n; i++)
	{
	    tmp[i] = a[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
	    a[i] = tmp[i];
	}
}
  
  

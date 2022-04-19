#include "main.h"
#include "stdio.h"

/**
 * print_array - prints a given number of members of an array
 *
 * @a: the array
 *
 * @n: the number of elements to be printed
 *
 * Return: (0)
 */
void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i < n -1; i++)
	{
		printf("%d, ", a[i]);
	}
	
	printf("%d ", a[n-1]);
}

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
	
	for(i = 0; i < n; i++)
	{
		printf("%d, %d,", a[i]);
	}
	printf("\n");
}

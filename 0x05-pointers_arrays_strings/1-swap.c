#include "main.h"

/**
 * swap_int - swaps the values strored at two given pointers
 * @a: first integer
 * @b: second integer
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

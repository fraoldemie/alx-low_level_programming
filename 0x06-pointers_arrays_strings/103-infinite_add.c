#include "main.h"
#include <stdio.h>

/**
 * infinite-add - adds the integer value of two strings
 * 
 * @n1: first string
 * 
 * @n2: second string
 * 
 * @r: string to return the result
 *
 * @size_r: size of the return string
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len;
	int len2;
	int N1;
	int N2;
	int R;
	int i, j;

	len = 0;
	len2 = 0;
	N1 = 0;
	N2 = 0;
	R = 0;
	for (; n1[len] != '\0'; len++)
		;
	for (; n2[len2] != '\0'; len2++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		int p = 1;
		for (j = 0; j < i; j++)
		{
			p = 10 * p;
		}
		N1 = N1 + (n1[i]-'0') * p;
	}
	for (i = len2 -1; i >= 0; i--)
	{
		int p = 1;
		for (j = 0; j < i; j++)
		{
			p = 10 * p;
		}
		N2 = N2 + (n2[i]-'0') * p;
	}
	R = N1 + N2;
	for (i = size_r - 2; i >= 0; i--)
	{
		r[i] = R % 10 + '0';
		R = R / 10;
	}
	r[size_r] = '\0';
	if (R > 0)
		return (0);
	return (r);
}

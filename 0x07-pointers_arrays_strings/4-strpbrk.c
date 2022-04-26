#include "main.h"
/**
 * strpbrk - locates the first occurence of any character from a given string in another string
 * @s: the string to be searched
 * @accept: the string whose members are to be searched 
 * Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int R = 0;
	char *C;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				R = 1;
				C = &(s[i]);
				break;
			}
		}
		if (R == 1) 
			break;
	}
	if (R == 1)
			return (C);
		return (0);
}
	
	

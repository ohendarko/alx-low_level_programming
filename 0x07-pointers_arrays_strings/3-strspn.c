#include "main.h"
#include <stdio.h>
/**
* _strspn - set b to n bytes of s
* @s: bytes location
* @accept: constant byte
* n: number of bytes
* Return: return s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}

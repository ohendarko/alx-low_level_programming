#include "main.h"
#include <stdio.h>
/**
* _strpbrk - set b to n bytes of s
* @s: bytes location
* @accept: constant byte
* n: number of bytes
* Return: return s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

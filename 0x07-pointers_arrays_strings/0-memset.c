#include "main.h"
/**
* _memset - set b to n bytes of s
* @s: bytes location
* @b: constant byte
* @n: number of bytes
* Return: return s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
/**
* _memcpy - set b to n bytes of s
* @dest: bytes location
* @src: constant byte
* @n: number of bytes
* Return: return s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

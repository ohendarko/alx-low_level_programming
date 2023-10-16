#include "main.h"
#include <stdio.h>
/**
* _strstr - set b to n bytes of s
* @haystack: meaning here
* @needle: betty no dey spy here
* n: number of bytes
* Return: return s
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

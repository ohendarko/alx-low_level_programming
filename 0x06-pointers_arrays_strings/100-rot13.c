#include "main.h"
#include <stdio.h>
/**
* rot13 - entry point
* str: parameter to be printed
* @s: no of element
* Return: return 0
*/
char *rot13(char *s)
{
	int i, j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopgrstuvwxyz";
	char swap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = swap[j];
				break;
			}
		}
	}
	return (s);
}

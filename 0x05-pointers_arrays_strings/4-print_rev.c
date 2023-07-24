#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - entry point
* @s: parameter to be printed
* Return: return 0
*/
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i <= len; i--)
	{
		_putchar(s[i]);
		if (i < 0)
		{
			break;
		}
	}
	_putchar('\n');
}

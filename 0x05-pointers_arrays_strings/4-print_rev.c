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
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

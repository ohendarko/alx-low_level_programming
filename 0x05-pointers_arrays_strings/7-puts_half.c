#include "main.h"
#include <stdio.h>
/**
* puts_half - entry point
* @str: parameter to be printed
* Return: return 0
*/
void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

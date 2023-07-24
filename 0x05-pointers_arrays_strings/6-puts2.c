#include "main.h"
#include <stdio.h>
/**
* puts2 - entry point
* @str: parameter to be printed
* Return: return 0
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

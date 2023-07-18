#include "main.h"
#include <stdio.h>
/**
*int _islower(int c) - check for lowercase.
*
*Return: Always 0 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
* print_sign - Shows 1 if the input is a lowercase character.
*Another cases, shows 0
*
* @n:  Variable is character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

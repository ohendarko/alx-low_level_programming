#include "main.h"
#include <stdio.h>
/**
* print_last_digit - Shows 1 if the input is a lowercase character.
*Another cases, shows 0
*
* @i:  Variable is character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest.
*/
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

#include "main.h"
#include <stdio.h>
/**
* _islower - Shows 1 if the input is a lowercase character.
*Another cases, shows 0
*
* @c:  Variable is character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest.
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

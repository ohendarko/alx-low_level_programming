#include "main.h"
#include <stdio.h>
/**
* _abs - Shows 1 if the input is a lowercase character.
*Another cases, shows 0
*
* @i:  Variable is character in ASCII code
*
*Return: 1 for lowercase character. 0 for the rest.
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

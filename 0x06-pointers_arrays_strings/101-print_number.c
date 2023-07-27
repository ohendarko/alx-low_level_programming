#include "main.h"
#include <stdio.h>
/**
* print_number - entry point
* str: parameter to be printed
* @n: no of element
* Return: return 0
*/
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

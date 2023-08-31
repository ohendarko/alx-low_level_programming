#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
* print_binary - function name
* @n: parameter passed
* Return: what you were made to do
*/
void print_binary(unsigned long int n)
{
	unsigned long int numofbits = 8;
	int i;

	for (i = numofbits - 1; i >= 0; i--)
	{
		_putchar('0' + ((n >> i) & 1));
	}

	_putchar('\n');
}

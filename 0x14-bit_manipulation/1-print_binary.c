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
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}

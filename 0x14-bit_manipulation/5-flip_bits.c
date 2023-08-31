#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* flip_bits - function name
* @n: parameter
* @m: parameter
* Return: as usual
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int knot = 0;
	unsigned long int buff = n ^ m;

	while (buff > 0)
	{
		knot += buff & 1;
		buff >>= 1;
	}
	return (knot);
}

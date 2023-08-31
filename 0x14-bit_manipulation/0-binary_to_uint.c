#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
* binary_to_uint - function name
* @b: parameter passed
* Return: what you were made to do
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int blen, i;
	unsigned int fin = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (blen = 0; b[blen] != '\0'; blen++)
	{
		if (b[blen] != '0' && b[blen] != '1')
			return (0);
	}

	for (i = 0; i < blen; i++)
	{
		fin = fin * 2 + (b[i] - '0');
	}
	return (fin);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_bit - function name
* @n: parameter
* @index: parameter
* Return: as usual
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* set_bit - function name
* @n: parameter
* @index: parameter
* Return: as usual
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int omega = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= omega;
	return (1);
}

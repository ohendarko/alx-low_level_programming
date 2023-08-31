#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* clear_bit - function name
* @n: parameter
* @index: parameter
* Return: as usual
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int alpha = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~alpha;

	return (1);
}

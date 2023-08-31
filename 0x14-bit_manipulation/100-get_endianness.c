#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_endianness - function name
* n: parameter
* m: parameter
* Return: as usual
*/
int get_endianness(void)
{
	unsigned int digt = 1;
	unsigned char *address = (unsigned char *)&digt;

	return (*address);
}

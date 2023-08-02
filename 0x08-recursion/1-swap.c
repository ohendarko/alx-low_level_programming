#include "main.h"
#include <stdio.h>
/**
* swap_int - resets n to 98
* @a: pointer to swap
* @b: pointer to swap
* Return: return 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

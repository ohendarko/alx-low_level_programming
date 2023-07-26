#include "main.h"
#include <stdio.h>
/**
* reverse_array - entry point
* @a: parameter to be printed
* @n: no of elements
* Return: return 0
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		char j;

		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}

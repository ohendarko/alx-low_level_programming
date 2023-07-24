#include "main.h"
#include <stdio.h>
/**
* print_array - entry point
* @a: parameter to be printed
* @n: parameter
* Return: return 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

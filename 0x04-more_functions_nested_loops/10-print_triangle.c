#include "main.h"

/**
* print_triangle - product of
* @size: variable
* Return: void
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 19 ; j >= size ; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}

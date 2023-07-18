#include "main.h"
#include <stdio.h>
/**
*print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int j = 1, i;

	while (j < 11)
	{
		for (i = 97; i < 123; i++)
		{
			putchar (i);
		}
		putchar ('\n');
		j++;
	}
}

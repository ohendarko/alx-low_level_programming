#include "main.h"
#include <stdio.h>
/**
*print_alphabet - Prints the alphabet in lowercase.
*
*Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
	putchar (i);
		i++;
	}
	putchar('\n');
}

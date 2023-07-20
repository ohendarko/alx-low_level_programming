#include "main.h"

/**
* print_most_numbers - product of
* * Return: 1 if success and 0 if fail
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	} _putchar('\n');
}

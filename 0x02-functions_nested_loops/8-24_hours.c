#include "main.h"
#include <stdio.h>
/**
* jack_bauer - Shows 1 if the input is a lowercase character.
*Another cases, shows 0
*
* @a, b, c, d:  Variable is character in ASCII code
*Return: 1 for lowercase character. 0 for the rest.
*/
void jack_bauer(void)
{
	int a, b;
	int c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a >= 2 && b >= 4)
						break;
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(58);
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}

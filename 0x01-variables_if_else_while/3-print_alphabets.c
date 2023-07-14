#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int i = 97;
	int c = 65;

	while (i < 123)
	{
		putchar (i);
			i++;
	}

	while (c < 91)
	{
		putchar (c);
			c++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int j = 1, i;

	while (j < 11)
	{
		for(i = 97; i < 123; i++)
		{
			putchar (i);
		}
		putchar ('\n');
		j++;
	}
	return (0);
}

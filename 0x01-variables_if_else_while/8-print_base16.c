#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n = 48;
	int m = 97;

	while (n < 58)
	{
		putchar (n);
			n++;
	}
	while (m < 103)
	{
		putchar (m);
			m++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - main deal here
* @s: no p
* Return: return 0
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}

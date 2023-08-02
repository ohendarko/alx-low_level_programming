#include "main.h"
#include <stdio.h>
/**
* factorial - main deal here
* @n: no p
* Return: return 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"
#include <stdio.h>
/**
* find_sqrt - main here
* @n: betty sake
* @g: betty sake
* Return: return int
*/
int find_sqrt(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, g + 1));
	}
}
/**
* _sqrt_recursion - main deal here
* @n: no p
* y: no p
* Return: return 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

#include "main.h"
#include <stdio.h>
/**
* is_prime_helper - main here
* @n: betty sake
* @d: betty sake
* Return: return int
*/
int is_prime_helper(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, d -  1));
	}
}
/**
* is_prime_number - main deal here
* @n: no p
* y: no p
* Return: return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}

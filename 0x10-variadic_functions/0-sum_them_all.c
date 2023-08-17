#include "stdarg.h"
/**
* sum_them_all - sums them all
* @n: number of arguments passed
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list listname;
	unsigned int i, sum = 0;

	va_start(listname, n);
	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(listname, unsigned int);

		sum += x;
	}
	va_end(listname);
	return (sum);
}

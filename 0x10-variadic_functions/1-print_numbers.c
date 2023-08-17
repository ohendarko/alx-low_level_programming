#include "stdarg.h"
#include <stdio.h>
/**
* print_numbers - prints them all
* @n: number of arguments passed
* @separator: separator
* Return: sum
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listname;
	unsigned int i;

	va_start(listname, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(listname, unsigned int));
		if (separator != NULL && i != (n-1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listname);
}

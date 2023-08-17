#include "stdarg.h"
#include <stdio.h>
/**
* print_strings - prints them all
* @n: number of arguments passed
* @separator: separator
* Return: sum
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listname;
	char *s;
	unsigned int i;

	va_start(listname, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(listname, char*);
		if (s == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(listname);
}

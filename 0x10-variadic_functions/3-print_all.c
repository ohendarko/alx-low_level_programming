#include "stdarg.h"
#include <stdio.h>
/**
* print_all - prints them all
* @format: number of arguments passed
* separator: separator
* Return: sum
*/
void print_all(const char * const format, ...)
{
	va_list listname;
	int i = 0;
	char *str, *sep = "";

	va_start(listname, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(listname, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(listname, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listname, double));
					break;
				case 's':
					str = va_arg(listname, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(listname);
}

#include "main.h"
#include <stdio.h>
/**
* cap_string - entry point
* @a: parameter to be printed
* n: no of element
* Return: return 0
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;

		if (a[i - 1] == ' ' ||
		    a[i - 1] == '\t' ||
		    a[i - 1] == '\n' ||
		    a[i - 1] == ',' ||
		    a[i - 1] == ';' ||
		    a[i - 1] == '.' ||
		    a[i - 1] == '!' ||
		    a[i - 1] == '?' ||
		    a[i - 1] == '"' ||
		    a[i - 1] == '(' ||
		    a[i - 1] == ')' ||
		    a[i - 1] == '{' ||
		    a[i - 1] == '}' ||
		    i == 0)
			a[i] -= 32;

		i++;
	}

	return (a);
}

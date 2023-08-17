#include "function_pointers.h"
/**
* print_name - name of function
* @name: betty sake
* @f: pointer to function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

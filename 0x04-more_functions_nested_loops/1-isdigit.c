#include "main.h"

/**
* _isdigit - check if c is uppercase or lowercase
* @c: variable that is checked
* Return: returns 1 if success and 0 if fail
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

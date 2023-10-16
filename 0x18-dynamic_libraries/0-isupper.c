#include "main.h"

/**
* _isupper - check if c is uppercase or lowercase
* @c: variable that is checked
* Return: returns 1 if uppercase and 0 if lowercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

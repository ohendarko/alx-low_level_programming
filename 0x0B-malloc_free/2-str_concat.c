#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenating function
* @s1: concatenate to
* @s2: concatenate from
* Return: return concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(i + j + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		concat[k + i] = s2[k];
	}
	concat[i + j] = '\0';
	return (concat);
}

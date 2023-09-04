#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_file - function name
* @filename: parameter
* @text_content: parameter
* Return: what is expected
*/
int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w");

	if (filename == NULL)
		return (-1);

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fprintf(file, "%s", text_content) < 0)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}

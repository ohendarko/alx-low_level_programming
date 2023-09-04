#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - function name
* @filename: parameter
* @letters: parameter
* Return: what is expected
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t n;
	char buffer[1024];

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (-1);
	}

	n = fread(buffer, sizeof(char), letters, file);

	if (n == 0 && !feof(file))
	{
		fclose(file);
		return (-1);
	}

	fwrite(buffer, sizeof(char), n, stdout);
	fclose(file);

	return (n);
}

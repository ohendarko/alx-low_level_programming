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
	int fdes;
	ssize_t n, i;
	char *buffer;

	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	n = read(fdes, buffer, letters);
	i = write(1, buffer, n);

	free(buffer);
	close(fdes);

	return (i);
}

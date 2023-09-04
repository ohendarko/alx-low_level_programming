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
	int fd;
	ssize_t n;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	n = read(fd, buffer, letters);

	if (n == -1)
	{
		close(fd);
		return (-1);
	}

	write(1, buffer, n);
	close(fd);

	return (n);
}

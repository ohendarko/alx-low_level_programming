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
	int fdes, bytes;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fdes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	bytes = write(fdes, text_content, len);

	if (fdes == -1 || bytes == -1)
		return (-1);

	close(fdes);

	return (1);
}

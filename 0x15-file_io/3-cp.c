#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
* main - main
* @argc: arg count
* @argv: arg vector
* Return: return value
*/
int main(int argc, char *argv[])
{
	int ch;
	const char *source_filename = argv[1];
	const char *destination_filename = argv[2];
	FILE *source_file = fopen(source_filename, "rb");
	FILE *destination_file = fopen(destination_filename, "wb");

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
		return (1);
	}

	if (source_file == NULL)
	{
		perror("Error opening source file");
		return (1);
	}
	if (destination_file == NULL)
	{
		perror("Error opening destination file");
		fclose(source_file);
		return (1);
	}
	while ((ch = fgetc(source_file)) != EOF)
	{
		fputc(ch, destination_file);
	}

	fclose(source_file);
	fclose(destination_file);

	if (chmod(destination_filename, 0664) == -1)
	{
		perror("Error setting permissions");
		return (1);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strtok - my strtok function
* @str: string to be tokenized
* @delim: delimiter
* Return: return what you have to
*/
int main()
{
	char input[100];

	printf("$ ");
	fgets(input, sizeof(input), stdin);

	char *token = _strtok(input, " ");
	printf("%s\n", token);
	while ((token = _strtok(NULL, " ")) != NULL)
	{
		printf("%s\n", token);
	}
	return (0);
}

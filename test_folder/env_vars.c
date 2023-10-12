#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[])
{
	int i = 0;
	char* env_variable = envp[i];

	while (env_variable != NULL)
	{
		//printf("%s\n", env_variable);
		char* key = strtok(env_variable, "=");
		char* value = strtok(NULL, "=");
		if (strcmp(key, "API_KEY") == 0)
		{
			printf("API_KEY value is %s\n\n", value);
		}

		i++;
		env_variable = envp[i];
	}

	return (0);
}

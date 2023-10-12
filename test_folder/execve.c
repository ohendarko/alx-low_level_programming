#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char inputStrings[100][100];

	int i;
	int numStrings = 0;

	printf("$");

	for (i = 0; i < 100; i++)
	{
		if (fgets(inputStrings[i], sizeof(inputStrings[i]), stdin) == NULL)
		{
			break;
		}

		size_t length = strlen(inputStrings[i]);
		if (length > 0 && inputStrings[i][length - 1] == '\n')
		{
			inputStrings[i][length - 1] = '\0';
		}

		numStrings++;
	}

	char cmd[100][100] = strcpy(inputStrings, cmd);
	char * argVec[] = {cmd[0], cmd[1], cmd[2], NULL};;
	char * envVec[] = {NULL};;
/*
	printf("Start of execve call %s:\n", cmd);
	printf("===========================================================\n");
	int status, i;
	pid_t child_pids[3];

	for (i = 0; i < 2; i++)
	{
		child_pids[i] = fork();
	}
	while (wait(NULL) != -1 || errno != ECHILD)
		printf("Child ran");*/
	execve(cmd, argVec, envVec);
	printf("Oops, something went wrong!\n");
	return 0;
}

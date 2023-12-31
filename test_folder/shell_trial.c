#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char input[100];

    while (1) {
        printf("$ ");
        fflush(stdout);  // Flush the output to ensure the prompt is displayed

        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }

        // Remove the newline character from the input
        size_t length = strlen(input);
        if (length > 0 && input[length - 1] == '\n') {
            input[length - 1] = '\0';
        }

        // Split the input into command and arguments
        char *token = strtok(input, " ");
        if (token == NULL) {
            continue;  // Empty input, prompt again
        }

        // Create an argument vector for execvp
        char *args[20];  // Adjust the size as needed
        args[0] = token;
        int argCount = 1;

        while ((token = strtok(NULL, " ")) != NULL) {
            args[argCount++] = token;
        }
        args[argCount] = NULL;  // Null-terminate the argument vector

        // Fork and execute the command
        pid_t pid = fork();
        if (pid < 0) {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            if (execvp(args[0], args) < 0) {
                perror("Execution failed");
                exit(EXIT_FAILURE);
            }
        } else {
            // Parent process
            int status;
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}




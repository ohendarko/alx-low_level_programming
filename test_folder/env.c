#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char* env_variable = getenv("PATH");
	printf("The value of out environment variable is:\n%s\n\n", env_variable);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char m[1024];

	printf("$ ");
	if (fgets(m, sizeof(m), stdin) != NULL)
	{
		printf("%s", m);
	}
	else
	{
		printf("ERROR");
	}
	return 0;
}

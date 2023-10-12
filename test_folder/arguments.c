#include <stdio.h>
#include <stdlib.h>
int main(int ac __attribute__((unused)), char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char s[] = "This is the way again.";
	char d[] = " ";
	
	char *portion = strtok(s, d);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, d);
	}

	for(int i = 0; i < 24; i++)
		if(s[i] == '\0')
			printf("\\0\n");
		else
			printf("%c\n", s[i]);

/*
	char *portion1 = strtok(s, d);
	printf("%s\n", portion1);

	char *portion2 = strtok(NULL, d);
	printf("%s\n", portion2);

	char *portion3 = strtok(NULL, d);
	printf("%s\n", portion3);
	
	char *portion4 = strtok(NULL, d);
	printf("%s\n", portion4);

	char *again = strtok(NULL, d);
	if (again == NULL)
		printf("We're done!\n");
	else
		printf("Still more to go!\n");
*/
/*
	printf("___________\nstrtok implentation test below\n__________\n");

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		if (s[i] == d[0])
			putchar('\n');
	}
	putchar('\n');
*/
	return 0;
}

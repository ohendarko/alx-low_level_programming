#include <stdio.h>
/**
* main - entry point
* Return: always return 0
*/
int main(void)
{
	int N = 100;
	int i;

	for (i = 1 ; i <= N ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

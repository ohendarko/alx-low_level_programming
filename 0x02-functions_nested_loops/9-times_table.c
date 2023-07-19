#include "main.h"
#include <stdio.h>
/**
*times_table - Prints the alphabet in lowercase 10 times.
*
*Return: Always 0 (success)
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j == 0)
			{
				printf("%d, ", result);
			}
			else
			{
				printf("%2d, ", result);
				if (j != 9)
				{
					printf(", ");
				}
			}
			printf("%2d, ", result);
		}
		printf("\n");
	}
}

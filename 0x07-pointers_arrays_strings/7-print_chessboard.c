#include "main.h"
#include <stdio.h>
/**
* print_chessboard - betty no dey spy here
* @a: betty no dey spy here
* n: number of bytes
* Return: whatever
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

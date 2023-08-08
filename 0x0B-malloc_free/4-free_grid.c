#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - betty sake
* @grid: betty sake
* @height: betty sake
* Return: return whatever
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

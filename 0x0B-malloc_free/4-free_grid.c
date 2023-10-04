#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - free 2 dimensional array
  * @grid: int
  * @height: int
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
		free(grid[i];
	free(grid);
}


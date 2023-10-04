#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - return a pointer to 2 dimensional array
  * @width: int
  * @height: int
  * Return: pointer to 2d array
  */

int **alloc_grid(int width, int height)
{
	int **str, i, j;

	str = malloc(sizeof(*str) * height);

	if (width <= 0 || height <= 0 || str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			str[i] = malloc(sizeof(**str) * width);
			if (str[i] == 0)
			{
				while (i--)
				{
					free(str[i]);
				}
				free(str);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				str[i][j] = 0;
		}
	}
	return (str);
}


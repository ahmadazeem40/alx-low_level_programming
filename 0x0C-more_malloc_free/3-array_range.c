#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: min int
  * @max: max int
  * Return: pointer to array
  */

int *array_range(int min, int max)
{
	int i, *p;
	int j = min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min); i++)
	{
		p[i] = j;
		j++;
	}

	return (p);
}


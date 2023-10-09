#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: num of elements
  * @size: size
  * Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	int *p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}

	return (p);
}


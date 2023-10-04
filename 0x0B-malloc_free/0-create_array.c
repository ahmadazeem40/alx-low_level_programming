#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * create_array - creates an array of chars
  * @size: size of array
  * @c: char to intialize with
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}


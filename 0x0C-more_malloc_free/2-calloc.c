#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _memset - fill memory with 0
  * @s: pointer
  * @n: size
  * Return: s
  */

char *_memset(char *s, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = 0;
	return (ptr);
}

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

	void *p = malloc(sizeof(int) * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, sizeof(int) * nmemb);

	return (p);
}


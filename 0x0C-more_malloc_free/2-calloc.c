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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, size * nmemb);

	return (p);
}


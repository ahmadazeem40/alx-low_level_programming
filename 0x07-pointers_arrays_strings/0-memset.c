#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: pointer to memory
  * @b: character to fill
  * @n: number of bytes to fill
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}

	return (s);
}


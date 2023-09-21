#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: destination
  * @src: source
  * @n: the maximum amount of bytes appended
  * Return: a pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, c = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		j++;
	}

	while (c < n)
	{
		dest[i++] = src[c];
		c++;
	}

	return (dest);
}


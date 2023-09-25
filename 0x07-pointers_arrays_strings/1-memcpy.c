#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: destination
  * @src: source
  * @n: number of bytes to copy
  * Return: a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int length = 0, i;

	while (src[length])
		length++;

	for (i = 0; n > 0 || i < length; i++, n--)
	{
		dest[i] = src[i];
	)

	return (dest);
}


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
	int i = 0, c = 0;

	while (dest[i])
	{
		i++;
	}

	while (c < n && src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}


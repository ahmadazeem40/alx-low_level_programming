#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string
 * @dest: result copy
 * @src: source copy
 * Return: result copy @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

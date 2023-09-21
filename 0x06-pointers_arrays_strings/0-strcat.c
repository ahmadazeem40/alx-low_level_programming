#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: string to be appended to
  * @src: string to append
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	return (dest);
}


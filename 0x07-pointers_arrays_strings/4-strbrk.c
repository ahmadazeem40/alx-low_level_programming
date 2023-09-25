#include "main.h"

/**
  * _strbrk - searches a string for any of a set of bytes
  * @s: string
  * @accept: accept
  * Return: pointer to the byte in s that matches one of the bytes in accept
  */
char *_strbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return ('\0');
}


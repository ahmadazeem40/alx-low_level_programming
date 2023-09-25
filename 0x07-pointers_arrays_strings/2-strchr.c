#include "main.h"

/**
  * _strchr - locate a character in a string
  * @s: string to check
  * @c: character to locate
  * Return: a pointer to the first occurrence of c in s or null if not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}


#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: string to compare
  * @s2: string to compare
  * Return: (1) if they are the same (0) if not
  */
int _strcmp(char *s1, char *s2)
{
	int i, r = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			r = 1;
		}
		else
		{
			break;
		}
	}

	return (r);
}


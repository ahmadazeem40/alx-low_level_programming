#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: string to compare
  * @s2: string to compare
  * Return: (1) if they are the same (0) if not
  */
int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			r = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (r);
}


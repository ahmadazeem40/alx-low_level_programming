#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenates to strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to result string
  */

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *str;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	str = malloc((size1 + size2) * sizeof(char) + 1);

	if (str == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i];
	}
	str[i] = '\0';
	return (str);
}


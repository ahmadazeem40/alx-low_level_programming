#include "main.h"

/**
  * isLower - check if character is lowercase
  * @c: char
  * Return: 0
  */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
  * isDelimiter - check if character is a delimiter
  * @c: char
  * Return: 0
  */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
  * cap_string - capitalizes all words of a string
  * @a: string
  * Return: pointer to result string
  */
char *cap_string(char *a)
{
	int *pa = a;
	int foundDelimit = 1;

	while (*a)
	{
		if (isDelimiter(*a))
			foundDelimit = 1;
		else if (isLower(*a) && foundDelimit)
		{
			*a -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0
		a++;
	}
	return (pa);
}


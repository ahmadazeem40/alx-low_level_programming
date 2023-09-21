#include "main.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @a: string to change
  * Return: string after change
  */

char *string_toupper(char *a)
{
	while (*a)
	{
		if (*a >= 97 && *a <= 122)
		{
			*a -= 32;
		}
		a++;
	}

	return (a);
}


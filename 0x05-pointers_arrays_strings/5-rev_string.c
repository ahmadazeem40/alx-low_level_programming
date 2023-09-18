#include "main.h"

/**
 * rev_string - print string in reverse order
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int j, i, n = 0;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j < length / 2; i++)
	{
		n = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = n;
	}
}

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
	char result[length];

	for (j = length - 1; j >= 0; j--)
	{
		result[n] = s[j];
		n++;
	}
}

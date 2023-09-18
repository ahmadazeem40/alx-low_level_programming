#include "main.h"

/**
 * rev_string - print string in reverse order
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int j, i;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
	;
	for (i = 0; i < j / 2; i++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[j - i - 1] = temp;
	}
}

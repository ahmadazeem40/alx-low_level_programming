#include "main.h"

/**
 * rev_string - print string in reverse order
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
	;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[l] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}

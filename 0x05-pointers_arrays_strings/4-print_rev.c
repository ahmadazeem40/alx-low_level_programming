#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int j, i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

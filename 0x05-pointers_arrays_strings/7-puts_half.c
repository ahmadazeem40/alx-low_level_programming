
#include "main.h"

/**
 * puts_half - print half of the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int l, i, start;

	while (str[l])
		l++;

	if (l % 2 == 0)
	{
		start = l / 2;
	}
	else
	{
		start = (l - 1 / 2) + 1;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

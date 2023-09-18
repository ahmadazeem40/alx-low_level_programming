#include "main.h"

/**
 * puts_half - print half of the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;

	while (str[l])
		l++;

	l++;

	for (l /= 2; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}

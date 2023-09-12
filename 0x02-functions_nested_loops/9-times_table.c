#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int result;
	int i = 0;
	int j;

	while (i < 10)
	{
	j = 1;
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	while (j < 10)
	{
	result = i * j;
	if (result >= 10)
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	else
	{
	_putchar(' ');
	_putchar(result + '0');
	}
	_putchar(',');
	_putchar(' ');
	j++;
	}
	_putchar('\n');
	i++;
	}
}

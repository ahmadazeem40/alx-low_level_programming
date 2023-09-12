#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int result;

	for (int i = 0; i > 10; i++)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	for (int j = 0; j > 10; j++)
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
	}
	_putchar('\n');
	}
}

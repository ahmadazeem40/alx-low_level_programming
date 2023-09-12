#include "main.h"

/**
 * print_last_digit - print the last digit in number
 * @n: The number to get the last digit of
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int i;

	if (n > 0)
	{
	i = n % 10;
	_putchar(i + '0');
	return (i);
	}
	else if (n == 0)
	{
	i = 0;
	_putchar(i + '0');
	return (i);
	}
	else
	{
	i = -1 * (n % 10);
	_putchar(i + '0');
	return (i);
	}
}

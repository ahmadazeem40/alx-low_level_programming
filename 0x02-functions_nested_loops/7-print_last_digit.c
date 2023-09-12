#include "main.h"

/**
 * print_last_digit - print the last digit in number
 * @n: The number to get the last digit of
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
	return (n % 10);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return ((n * -1) % 10);
	}
}

#include "main.h"

/**
 * print_last_digit - print the last digit in number
 * @n: The number to get the last digit of
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	return (_abs(n % 10));
}

#include "main.h"

/**
 * _abs - return the absolute value of a number
 * @n: The number to check
 *
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return (n * -1);
	}
}

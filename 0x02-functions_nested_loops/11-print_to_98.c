#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all nautral numbers starting from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
	if (n == 98)
	printf("%d", n);
	else
	printf("%d, ", n);
	}
}

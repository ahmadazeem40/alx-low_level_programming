#include "main.h"

/**
 * print_array - print a number of array elements
 * @a: array
 * @n: num of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar(a[i]);
		}
		else
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

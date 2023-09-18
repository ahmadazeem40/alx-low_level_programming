#include "main.h"
#include <stdio.h>

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
			printf("%i", a[i]);
		}
		else
		{
			printf("%i, ", a[i]);
		}
	}
	printf("\n");
}

#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  * @a: matrix
  * @size: size of matrix
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		n2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", n1);
	printf("%d\n", n2);
}


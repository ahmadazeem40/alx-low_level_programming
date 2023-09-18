#include "main.h"

/**
 * swap_int - swap two variables
 * @a: the pointer to swap
 * @b: the pointer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

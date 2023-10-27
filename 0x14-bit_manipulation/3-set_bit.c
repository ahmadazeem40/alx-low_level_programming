#include "main.h"

/**
 * set_bit - set bit
 * @n: num
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n != 1L << index));
}

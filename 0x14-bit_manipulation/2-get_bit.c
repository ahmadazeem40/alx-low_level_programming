#include "main.h"

/**
 * get_bit - get bit
 * @n: num
 * @index: index
 * Return: bit or -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

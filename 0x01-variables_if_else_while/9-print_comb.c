#include <stdio.h>

/**
 * main - write the base 10 combs
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
	putchar(c);
	if (c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	return (0);
}

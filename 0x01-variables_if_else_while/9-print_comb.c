#include <stdio.h>

/**
 * main - write the base 10 combs
 *
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
	putchar(c);
	if (c != 57)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - write the base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}
	c = 'a';
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}

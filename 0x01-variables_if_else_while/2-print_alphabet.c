#include <stdio.h>

/**
 * main - write the lower case alphabet
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
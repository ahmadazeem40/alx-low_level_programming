#include <stdio.h>

/**
 * main - write the lower case alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);
}

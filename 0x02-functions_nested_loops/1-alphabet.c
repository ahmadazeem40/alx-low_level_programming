#include "main.h"

/**
 * main - print the alphabet
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
}
/**
 * print_alphabet - print the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
}

#include "main.h"

/**
 * _isalpha - Check of character input is a letter or not
 * @c: The character to check
 *
 * Return: 0 if not a letter , 1 if is a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}

#include "main.h"

/**
 * _islower - Check of character input is lower case letter or not
 * @c: The character to check
 *
 * Return: 0 if not lower , 1 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

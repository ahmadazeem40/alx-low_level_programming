#include "main.h"

int guess(int n, int v);
/**
  * _sqrt_recursion - returns square root
  * @n: int
  * Return: sqrt
  */

int _sqrt_recursion(int n)
{
	return (guess(n, 1));
}

/**
  * guess - returns square root
  * @n: int
  * @v: value
  * Return: sqrt
  */

int guess(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (guess(n, v + 1));
	else
		return (-1);
}


#include "main.h"

int check_prime(int n, int othern);
/**
  * is_prime_number - returns the factorial of a given number
  * @n: int
  * Return: prime number
  */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
  * check_prime - returns the prime of a given number
  * @n: int
  * @othern: other int
  * Return: prime number
  */

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
		return (1);
	else if (n % othern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othern + 1));
}


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - print strings
  * @separator: separator between strings
  * @n: number of args
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i < n - 1 ? (separator ? separator : "") : "\n");
	}

	va_end(ap);
}


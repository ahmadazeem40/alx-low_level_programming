#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} toket_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif


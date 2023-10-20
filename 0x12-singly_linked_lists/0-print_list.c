#include "lists.h"

/**
  * _strlen - length of string
  * @s: string
  * Return: int length
  */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
  * print_list - print linked list
  * @h: linked list
  * Return: size of linked list
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}


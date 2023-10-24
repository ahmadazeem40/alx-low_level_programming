#include "lists.h"

/**
 * listint_len - print linked list
 * @h: first node
 * Return: size of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

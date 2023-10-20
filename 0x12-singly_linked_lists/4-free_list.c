#include "lists.h"

/**
  * free_list - free linked list
  * @head: head of linked list
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *p, *np;

	if (!head)
		return;

	p = head;
	while (p)
	{
		np = p->next;
		free(p->str);
		free(p);
		p = np;
	}
}


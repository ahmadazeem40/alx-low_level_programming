#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first node
 * Return: void
 */
void free_listint2(listint_t *head)
{
	listint_t *node, node2;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		node2 = node;
		node = node->next;
		free(node2);
	}
	*head = NULL;
}

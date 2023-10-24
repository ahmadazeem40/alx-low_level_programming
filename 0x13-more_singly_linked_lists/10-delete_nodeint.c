#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: first node
 * @index: index
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node2;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			node2->next - node->next;
			free(node);
			return (1);
		}
		i++;
		node2 = node;
		node = node->next;
	}
	return (-1);
}

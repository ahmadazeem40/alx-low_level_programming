#include "lists.h"

/**
 * sum_listint - sum of linked list data
 * @head: first node
 * Return: sum of nodes
 */
listint_t sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

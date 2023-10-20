#include "lists.h"

/**
  * add_node_end - add node
  * @head: head node
  * @str: string
  * Return: new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_ currunt = *head;

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}

	if (currunt)
	{
		while (currunt->next)
		{
			currunt = currunt->next;
		}
		currunt->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}


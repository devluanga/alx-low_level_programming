#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	dup = strdup(str);

	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	temp->str = dup;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}

	return (*head);
}

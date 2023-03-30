#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;

	list_t *temp = (list_t *)malloc(sizeof(list_t));

	dup = strdup(str);

	if (temp == NULL)
	{
		return (NULL);
	}

	if (dup == NULL || head == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dup;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}

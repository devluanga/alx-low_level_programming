#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = ptr;
		ptr = temp;
		return (temp);
	}
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr)
		{
			free(temp);
			return (NULL);
		}
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}

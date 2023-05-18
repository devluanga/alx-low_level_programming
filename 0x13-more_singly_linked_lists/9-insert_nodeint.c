#include "lists.h"
#include <stdio.h>
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
	unsigned int data = 0;

	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (temp);
	}

	while (data < idx - 1)
	{
		if (ptr == NULL || ptr->next == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		data++;
	}
	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}

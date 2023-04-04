#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		ptr = temp->next;
		ptr = temp;
		return (ptr);
	}
	while (count < idx)
	{
		count++;
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr = temp->next;
	return (ptr);
}

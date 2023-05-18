#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - function adds a node at
 *	the end of the linked list
 *@head: points to the head pointer
 *@n: a value of the node to be added
 *Return: returns null if it fails
 *	address odf the new element if successful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	ptr = temp;
	return (temp);
}

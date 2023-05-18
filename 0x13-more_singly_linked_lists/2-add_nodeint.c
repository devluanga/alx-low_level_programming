#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - functions adds a new node at the beginning
 *of the linkedlist
 *@head: pointer to address of the head
 *@n: data to be added as a node
 *Return: returns the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;

	*head = temp;
	return (temp);
}

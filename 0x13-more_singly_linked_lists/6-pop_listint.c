#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - function deletes the head of
 *	the linkedlist
 *@head: points to the pointer of the head
 *Return: returns pointer to the head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp = *head;
	int n;

	/**
	 *this condition checks if the linkedlist is empty
	 *returns 0 if its empty list
	 */
	if (ptr == NULL)
	{
		return (0);
	}
	n = temp->n; /*stores head data*/
	ptr = ptr->next; /*moves head pointer to the next node*/
	free(temp); /*deletes the node pointed by temp pointer*/
	*head = ptr;
	temp = NULL;
	return (n);
}

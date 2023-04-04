#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - function deletes all the nodes from
 *	the linkedlist
 *@head: points to the pointer to the head
 *Return: return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp;
	
	if (ptr == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}

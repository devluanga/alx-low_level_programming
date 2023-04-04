#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - function deletes the last node
 *	of the linked list
 *@head: points to the pointer of the first node
 *Return: returns pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (ptr == NULL)
	{
		return;
	}
	else if (ptr->next == NULL)
	{
		free(ptr);
		ptr = NULL;
	}
	else
	{
		/**
		 *we need to traverse the list until we
		 *	get to the second last node
		 */
		while (ptr->next->next != NULL)
		{
			ptr = ptr->next;
		}
		free(ptr->next);
		ptr->next = NULL;
	}
}

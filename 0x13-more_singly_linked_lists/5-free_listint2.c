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
	else if (ptr->next == NULL)
	{
		free(ptr);
		ptr = NULL;
	}
	else
	{
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
			/*temp = NULL;*/
		}
		*head = NULL;
	}
}

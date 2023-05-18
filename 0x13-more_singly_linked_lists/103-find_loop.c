#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Finds the loop contained in the list.
 * @head: A pointer to the head of the list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *temp;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	ptr = head->next;
	temp = ptr->next;

	while (temp)
	{
		if (ptr == temp)
		{
			ptr = head;

			while (ptr != temp)
			{
				ptr = ptr->next;
				temp = temp->next;
			}

			return (ptr);
		}

		ptr = ptr->next;
		temp = (temp->next)->next;
	}

	return (NULL);
}

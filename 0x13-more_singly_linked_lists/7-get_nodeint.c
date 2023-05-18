#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - function returns Nth node of the list
 *@head: pointer to the head
 *@index: index of the node starting at 0
 *Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	/*listint_t *temp = *head;*/
	unsigned int count = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	return (head);
}

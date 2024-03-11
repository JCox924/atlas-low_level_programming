#include "lists.h"

/**
*get_nodeint_at_index - gets a certain node
*
*@head: pointer to head
*
*@index: index of node
*
*Return: node specified, NULL if not found
*/

listint_t *get_nodeint_at_index(list_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return head;
		}
		head = head->next;
		count++;
	}
	return (NULL);
}

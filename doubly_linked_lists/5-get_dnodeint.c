#include "lists.h"

/**
*get_dnodeint_at_index - returns a certain node
*
*@head: pointer to head
*
*@index: node specifier
*
*Return: specified node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int present = 0;

	while (head != NULL)
	{
		if (present == index)
		{
			return (head);
		}
		head = head->next;
		present++;
	}
	return (NULL);
}


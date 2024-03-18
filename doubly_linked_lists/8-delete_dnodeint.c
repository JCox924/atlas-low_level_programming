#include "lists.h"

/**
*delete_dnodeint_at_index - deletes node at index
*
*@head: pointer to pointer to head
*
*@index: index specifier
*
*Return: 1 if success, -1 if error
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	free(current);

	return (1);
}

#include "lists.h"

/**
*delete_nodeint_at_index - deletes a given node
*
*@head: pointer to pointer to head
*
*@index: index of the node that should be deleted
*
*Return: 1 if succeeded, -1 if error
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	current = *head;

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	tmp = current->next;
	current->next = tmp->next;

	free(tmp);

	return (1);
}

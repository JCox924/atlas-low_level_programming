#include "lists.h"

/**
*insert_dnodeint_at_index - inserts node
*
*@h: pointer to pointer to head
*
*@idx: index
*
*@n: int for new_node
*
*Return: address of new node
*/

dlistint_t *insert_dnode_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;

		return (new_node);
	}
	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i == idx - 1 && current != NULL)
	{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		current->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

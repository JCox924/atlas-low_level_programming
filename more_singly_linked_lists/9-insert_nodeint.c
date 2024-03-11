#include "lists.h"

/**
*insert_nodeint_at_index - inserts a node at a given index
*
*@head: pointer to pointer to head
*
*@idx: new node index
*
*@n: int for new node
*
*Return: address of new node, NULL if error
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	unsigned int i = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	while (tmp != NULL && i != idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL && i < idx - 1)
	{
		free(new_node);

		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}

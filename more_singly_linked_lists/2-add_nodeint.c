#include "lists.h"

/**
*add_nodeint - add new node to beginning of list
*
*@head: pointer to pointer to head
*
*@n: int to add to list
*
*Return: address of new int, NULL if error
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}

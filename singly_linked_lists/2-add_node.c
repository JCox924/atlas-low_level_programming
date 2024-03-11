#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node- adds a new node to beginning of list
*
*@head: pointer to pointer to head
*
*@str: string added to list
*
*Return: address of the new node, or NULL if error
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

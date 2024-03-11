#include "lists.h"

/**
*free_listint2 - frees listint_t
*
*@head: pointer to head of list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	current = *head;


	while (head != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;

}

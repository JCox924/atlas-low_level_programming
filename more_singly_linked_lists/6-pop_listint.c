#include "lists.h"

/**
*pop_listint - deletes head node, returns head's data
*
*@head: pointer to pointer to head
*
*Return: head node data, 0 is empty
*/

int pop_listint(listint_t **head)
{
	lintint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (n);
}

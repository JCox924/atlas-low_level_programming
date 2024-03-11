#include "lists.h"

/**
*free_listint - frees listint_t
*
*@head: pointer to head of list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

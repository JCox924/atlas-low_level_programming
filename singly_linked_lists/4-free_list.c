#include <stdlib.h>
#include "lists.h"

/**
*free_list - frees list_t
*
*@head: pointer to head of list
*
*Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

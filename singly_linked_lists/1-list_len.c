#include "lists.h"
#include <stdio.h>

/**
*list_len - returns the length of a list
*
*@h: head
*
*Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

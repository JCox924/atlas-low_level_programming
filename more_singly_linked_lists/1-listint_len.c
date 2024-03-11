#include "lists.h"

/**
*listint_len - returns # of elements in list
*
*@h: head of list
*
*Return: # of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

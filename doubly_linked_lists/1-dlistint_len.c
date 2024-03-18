#include "lists.h"

/**
*dlistint_len - prints all elements in list
*
*@h: pointer to head of list
*
*Return: The number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
		
	}
	return (counter);
}


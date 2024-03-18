#include "lists.h"

/**
*print_dlistint - prints all elements in list
*
*@h: pointer to head of list
*
*Return: The number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n" h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}


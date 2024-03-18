#include "lists.h"

/**
*sum_dlistint - sums elements of lis*
*
*@head: pointer to head
*
*Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

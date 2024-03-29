#include "lists.h"

/**
*sum_listint - sums elements in a list
*
*@head: pointer to head
*
*Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

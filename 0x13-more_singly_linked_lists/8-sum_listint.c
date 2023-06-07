#include "lists.h"

/**
 * sum_listint - calculates the sum.
 *
 * @head: head node
 *
 * Return: check the code
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempvalue = head;

	while (tempvalue)
	{
		sum += tempvalue->n;
		tempvalue = tempvalue->next;
	}
	return (sum);
}

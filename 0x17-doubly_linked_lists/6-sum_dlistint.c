#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - return sum.
 * Description: Function that return the sum of  all data of the list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * Return:sum of all data of the list
 **/
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp = head;
	size_t sum;

	if (temp == NULL)
		return (0);

	for (sum = 0; temp != NULL;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

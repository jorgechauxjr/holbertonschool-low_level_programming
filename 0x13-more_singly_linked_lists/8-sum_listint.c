#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - return sum.
 * Description: Function that return the sum of  all data of the list
 * @head: pointer to a structure typedef list_t
 * Return:sum of all data of the list
 **/
int sum_listint(listint_t *head)
{
/*temp is a listint_t type. It is a structure*/
	const listint_t *temp = head;
	size_t sum;

	if (temp == NULL)
		return (0);
/*
 * if temp is null, it means it is in the last node. For that reason the
 * condition is: while temp diferent from NULL
 */
	for (sum = 0; temp != NULL; sum++)
	{
/*sum of each data (n) ele,ents of the list*/
		sum += temp->n;
/*point to the next address, it means the next node*/
		temp = temp->next;
	}

	return (sum);
}

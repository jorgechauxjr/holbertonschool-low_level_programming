#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -function get nth node.
 * Description: Function that return the nth node of a list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @index: n node of the llist
 * Return: the nth node of a list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (index > 0)
	{ /*if node does not exist return null*/
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		index--;
	}
	return (temp);
}

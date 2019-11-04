#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index -function get nth node.
 * Description: Function that return the nth node of a list
 * @head: pointer to a pointer
 * @index: n node of the llist
 * Return: the nth node of a list
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

/*pointer temp receives address of the node that goes after head*/
	temp = head;

	while (index > 0) /*index is the nth node of the list*/
	{
		temp = temp->next; /*temp will point to the next node*/
		index--;
	}
	return (temp);
}

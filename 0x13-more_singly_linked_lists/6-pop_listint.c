#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -function delete head node.
 *Description: Function that deletes the head of node of a listint.
 * @head: pointer to a pointer
 * Return: the head nodes data (n) if linked list empty return 0
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

/*pointer temp receives address of the node that goes after head*/
	temp = (*head)->next;
	/*I assign to num the value of n*/
/* (integer member in the structure of the head)*/
	num = (*head)->n;
/*I aply free to head*/
	free(*head);
	*head = temp; /*the new head is temp*/

	return (num);
}

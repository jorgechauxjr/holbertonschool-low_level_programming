#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index -delete node
 * Description: Function that deletes the node at index index of a listint.
 * @head: pointer to a pointer of type listint_t (structure
 * @index: the inde of the node that should be deleted, index starts at 0
 * Return: 1 if succeed, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0) /*if the index is 0 I delete the node cero*/
	{
		temp = temp->next; /*temp is going to point to the next node*/
		free(*head); /*free head (the zero node)*/
		*head = temp; /*the new head is going to be temp*/
	}
	else
	{
		for (i = 1; i < index; i++)
		{
/*Validate if the index given does not exist, return -1*/
/*Ex:My list have 2 Nodes and they told me to delete idx 5*/
/*it returns -1 because it does not exist*/
			if (temp->next == NULL)
				return (-1);
/*temp goes to the next node until it get to one position before the index*/
			temp = temp->next;
		}
/*I assign temp to copy*/
		copy = temp;
/*=copy->next->next save copy of the node ahead the node Im going to delete*/
		copy = copy->next->next;
/*because is one position before the index, I free (delete) the next node*/
/* that is the one I need to delete*/
		free(temp->next);
		temp->next = copy;
	}
	return (1);
}

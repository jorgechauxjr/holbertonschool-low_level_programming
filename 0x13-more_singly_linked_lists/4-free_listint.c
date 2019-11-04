#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -free list.
 *Description: Function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/
void free_listint(listint_t *head)
{
	if (head != NULL) /*validate that the pointer is not null*/
	{
		if (head->next != NULL)
			free_listint(head->next); /* call recursive function */

		free(head);
	}
/*
 * other option:
 *
 *	listint_t *temp;
 *
 *	while (head != NULL)
 *	{
 *		temp = head;
 *		head = head->next;
 *		free(temp);
 *	}
 *      free(head)
 **/
}

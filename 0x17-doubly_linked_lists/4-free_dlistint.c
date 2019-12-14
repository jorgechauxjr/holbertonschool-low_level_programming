#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint -free list.
 *Description: Function that frees a dlist_t list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * Return: void.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

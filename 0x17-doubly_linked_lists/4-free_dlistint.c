#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -free list.
 *Description: Function that frees a dlist_t list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * Return: void.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -free list.
 *Description: Function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;

	while (temp) /*The same as while (temp != NULL)*/
	{
		temp = temp->next; /*I assign the next to temp*/
		free(*head); /*free head*/
		*head =	temp; /*the new head is temp, it means the next positi*/
	}
	*head = NULL; /*The function sets the head to NULL*/

}

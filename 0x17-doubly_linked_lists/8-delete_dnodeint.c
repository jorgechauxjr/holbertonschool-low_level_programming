#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index -delete node
 * Description: Function that deletes the node at index index of a dlistint.
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @index: the inde of the node that should be deleted, index starts at 0
 * Return: 1 if succeed, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *copy;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		temp->next->prev = NULL;
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
		for (i = 1; i < index; i++)
		{
			if (temp->next == NULL)
				return (-1);

			temp = temp->next;
		}
		copy = temp;
		if (copy->next->next != NULL)
		{
		copy = copy->next->next;
		free(temp->next);
		temp->next = copy;
		copy->prev = temp;
		return (1);
		}
		copy = copy->next;
		free(copy);
		temp->next = NULL;
		*head = temp;
		return (1);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end -add node to list.
 *Description: Function that adds a new node at the end of a dlistint_t list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @n: int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		newNode->prev = tmp;
		tmp->next = newNode;

		return (newNode);
}

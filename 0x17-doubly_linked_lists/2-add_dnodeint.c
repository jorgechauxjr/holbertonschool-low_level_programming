#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint -add node to list.
 *Description: Function that adds a new node at the beginning of dlistint_t
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

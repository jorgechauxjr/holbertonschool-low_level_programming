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
		return (NULL);

/*If no head there will be no previous for that reason validate if head null*/
	if (*head == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	newNode->n = n;
	newNode->prev = NULL; /*For that reason the validation previous*/
	newNode->next = *head;

	(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}

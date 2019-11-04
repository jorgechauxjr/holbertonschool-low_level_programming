#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end -add node to list.
 *Description: Function that adds a new node at the end of a listint_t list
 * @head: pointer to a pointer
 * @n: int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->n = n;
		newNode->next = NULL;

		if (*head == NULL)
			*head = newNode;
		else
			(*head)->next = newNode;

		return (newNode);
	}

	return (add_nodeint_end(&(*head)->next, n));
}

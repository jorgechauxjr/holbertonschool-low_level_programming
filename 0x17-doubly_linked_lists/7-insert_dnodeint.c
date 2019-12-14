#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index -add node to list.
 * Description: Function that adds a new node in an index position of list
 * @h: Head of the list. Pointer to a structure dlistint_s
 * @idx: int that represents the index, where the node is going to be inserted
 * @n: integer value of the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while ((idx - 1) > 0)
	{
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

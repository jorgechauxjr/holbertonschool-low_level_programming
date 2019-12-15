#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - len.
 *Description: Function that return number of nodes of a dsingle linked list
 * @h: Head of the list. Pointer to a structure dlistint_sHead of the list.
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numNodes;

	for (numNodes = 0; temp != NULL; numNodes++)
	{
		temp = temp->next;
	}
	return (numNodes);
}
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
	dlistint_t *newNode, *temp = *h;
	size_t listLen;
newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(newNode);
			return (NULL);
		}
		return (add_dnodeint(h, n));
		}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	listLen = dlistint_len(temp);
	if (idx > listLen)
		return (NULL);
	if (idx == listLen)
		return (add_dnodeint_end(h, n));
	while ((idx - 1) > 0)
	{
		temp = temp->next;
		idx--;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}

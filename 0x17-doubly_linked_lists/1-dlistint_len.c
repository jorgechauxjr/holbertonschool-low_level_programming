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
		temp = temp->next;

	return (numNodes);
}

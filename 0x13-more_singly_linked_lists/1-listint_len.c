#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return number of nodes.
 *Description: Function that return number of nodes of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t listint_len(const listint_t *h)
{
/*temp is a listint_t type. It is a structure*/
	const listint_t *temp = h;
	size_t numNodes;
/*
 * if temp is null, it means it is in the last node. For that reason the
 * condition is: while temp diferent from NULL
 */
	for (numNodes = 0; temp != NULL; numNodes++)
		temp = temp->next;

	return (numNodes);
}

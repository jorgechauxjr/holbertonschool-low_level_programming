#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint -print list.
 *Description: Function that prints content of a doubly linked list
 * @h: Head of the list. Pointer to a structure dlistint_s
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
/*temp is a listint_t type. It is a structure*/
	const dlistint_t *temp = h;
	size_t numNodes;
/*
 * if temp is null, it means it is in the last node. For that reason the
 * condition is: while temp diferent from NULL
 */
	for (numNodes = 0; temp != NULL; numNodes++)
	{
		printf("%d\n", temp->n);
		temp = temp->next; /*temp will point to the next node*/
	}
	return (numNodes);
}

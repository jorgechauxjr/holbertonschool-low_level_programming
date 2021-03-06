#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -print elements of the list. An integer.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
/*temp is a listint_t type. It is a structure*/
	const listint_t *temp = h;
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

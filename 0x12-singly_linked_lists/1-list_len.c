#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -print list.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t list_len(const list_t *h)
{
/*temp is a list_t type. It is a structure*/
	const list_t *temp = h;
	size_t numNodes;
/*
 * if temp is null, it means it is in the last node. For that reason the
 * condition is: while temp diferent from NULL
 */

	for (numNodes = 0; temp != NULL; numNodes++)
		temp = temp->next; /*temp will point to the next node*/

	return (numNodes);
}

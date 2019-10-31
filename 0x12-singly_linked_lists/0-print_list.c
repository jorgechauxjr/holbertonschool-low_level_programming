#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -print list.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t numNodes;

	for (numNodes = 0; temp != NULL; numNodes++)
	{
		if (temp->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);

		}
		temp = temp->next;
	}

	return (numNodes);
}

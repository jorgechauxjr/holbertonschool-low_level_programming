#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -add node to list.
 *Description: Function that adds a new node at the end of a list_t list
 * @head: pointer to a pointer
 * @str: string value in the structure
 * Return: the address of the new element or NULL if fail
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int c;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		newNode = malloc(sizeof(list_t));

		if (newNode == NULL)
		{
			free(newNode);
			return (NULL);
		}

		for (c = 0; str[c] != '\0'; c++)
			;
		newNode->str = strdup(str);
		newNode->len = c;
		newNode->next = NULL;

		if (*head == NULL)
			*head = newNode;
		else
			(*head)->next = newNode;

		return (newNode);
	}

	return (add_node_end(&(*head)->next, str));
}

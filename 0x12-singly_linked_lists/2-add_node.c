#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node -add node to list.
 *Description: Function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: string value in the structure
 * Return: the address of the new element or NULL if fail
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int c;

	newNode = malloc(sizeof(list_t)); /*Asign a memory space for newNode*/

	if (newNode == NULL)
	{ /* validate that malloc is good, if not return null and free memory */
		free(newNode);
		return (NULL);
	}
/*c to know the leng of the string*/
	for (c = 0; str[c] != '\0'; c++)
		;
/*strdup make a duplicate of the string into the newNode str*/
	newNode->str = strdup(str);
/*c is the len of the string. it is asigned to newNode.len attribute*/
	newNode->len = c;
/*the member newNode->next I assigned the addres of head*/
	newNode->next = *head;
	/* poinetr head is going to save all the newNode info, int this case*/
	/*the addres of newNode become the head*/
	*head = newNode;

	return (newNode);
}

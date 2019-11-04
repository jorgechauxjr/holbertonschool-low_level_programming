#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint -add node to list.
 *Description: Function that adds a new node at the beginning of listint_t list
 * @head: pointer to a pointer
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t)); /*Asign a memory space for newNode*/

	if (newNode == NULL)
	{ /* validate that malloc is good, if not return null and free memory */
		free(newNode);
		return (NULL);
	}
/*assign value of n to member n in the structure of new node*/
	newNode->n = n;
/*the member newNode->next I assigned the addres of head*/
	newNode->next = *head;
	/* poinetr head is going to save all the newNode info, int this case*/
	/*the addres of newNode become the head*/
	*head = newNode;

	return (newNode);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -add node to list.
 * Description: Function that adds a new node in an index position of list
 * @head: pointer to a pointer
 * @idx: int that represents the index, where the node is going to be inserted
 * @n: integer value of the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t)); /*Asign a memory space for newNode*/

	if (newNode == NULL)
	{ /* validate that malloc is good, if not return null and free memory */
		free(newNode);
		return (NULL);
	}
/*assign value of n to member n in the structure of new node*/
	newNode->n = n;

	if (idx == 0)
	{
/*the member newNode->next I assigned the addres of head*/
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while ((idx - 1) > 0)
	{
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

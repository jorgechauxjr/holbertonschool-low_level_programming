#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverse a list
 * @head: the head of list
 * Description: this function reverse a singly linked list
 * Return: head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *actual;

	if (*head == NULL)
		return (NULL);

	actual = *head;

	while (actual->next != NULL)
	{
		tmp = actual->next;
		actual->next = tmp->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}

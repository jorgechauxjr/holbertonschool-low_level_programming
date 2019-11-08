#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head; /*pointer of type listint_t*/
	listint_t *new;
	listint_t hello = {8, NULL}; /*data structure wit value n = 8, null*/
	size_t n;

	head = &hello; /*assign to head the address of hello*/
	new = malloc(sizeof(listint_t)); /*create a space of memory for new*/
	if (new == NULL) /*after using malloc validate is not null*/
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9; /*assign the value 9 to n*/
	/*assign the adress or point to the next element,*/
/*in this case, store the address of head*/
	new->next = head;
	head = new;  /*The head is going to be new*/
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}

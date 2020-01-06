#include "lists.h"
/**
  * find_listint_loop -fnction.
  *Description: Function checks if a singly linked list has a cycle in it.
  * @head: pointer of type listint_t
  * Return: NULL if there is no cycle, the node if there is a cycle
  **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

/* "slow" will go 1 by 1  "fast" will go 2 by 2 through the list*/
	while ((slow && fast != NULL) && (fast->next != NULL))
	{
		slow = slow->next;
		fast = fast->next->next;
/*if slow is equal to fast it means they are in the same place of the list*/
/* as result it means there is a cycle in the list*/
		if (slow == fast)
			return (slow);
	}
/*if not, the list have no cycle*/
	return (NULL);
}

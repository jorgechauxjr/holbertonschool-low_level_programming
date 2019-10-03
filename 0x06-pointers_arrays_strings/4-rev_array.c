#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array -main entry.
 *void: nothing
 *@a: int  pointer
 *@n: int variable
 *Description: function that reverses the content of an array of integers
 * Return:void
 **/
void reverse_array(int *a, int n)
{
	int i;
	char ch;

/* n-- is n = n-1 because the last position is garbage*/
	n--;

	for (i = 0; i <= n; n--, i++)
	{
		ch = a[i];
		a[i] = a[n];
		a[n] = ch;
	}
}

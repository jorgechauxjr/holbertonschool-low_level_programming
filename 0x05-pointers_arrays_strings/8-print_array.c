#include "holberton.h"
#include <stdio.h>
/**
 *print_array -main entry.
 *void: nothing
 *@a: int pointer
 *@n: integer number of elements of the array to be printed
 *Description: function prints elements of array of integers
 * Return: void
 **/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (!(c == n))
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	}
	printf("\n");
}

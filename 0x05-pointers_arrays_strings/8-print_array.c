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

/*the array counts from position 0 for that reason I used n -1 */
	for (c = 0; c < n - 1; c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == n - 1)
		printf("%d", a[c]);

	printf("\n");
}

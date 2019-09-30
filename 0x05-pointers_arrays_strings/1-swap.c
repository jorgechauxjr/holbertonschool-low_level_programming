#include <stdio.h>
#include "holberton.h"
/**
 *swap_int -main entry.
 *void: nothing
 *@a: integer pointer
 *@b: integer pointer
 *Description: function that swaps the values of two integers.
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}

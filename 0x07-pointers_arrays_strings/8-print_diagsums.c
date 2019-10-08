#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums -main entry.
 *@a:char pointer
 *@size: int variable
 *Description:print sum of the2 diagonals of a square matrix of integers
 * Return:unsigned int
 **/
void print_diagsums(int *a, int size)
{
	int x, sum, sum2;

	for (x = 0, sum = 0; x < (size * size) ; x += size + 1)
		sum = sum + a[x];

	for (x = size - 1, sum2 = 0; x <= (size * size) - 2; x += size - 1)
		sum2 = sum2 + a[x];

	printf("%d, %d\n", sum, sum2);
}

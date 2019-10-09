#include <stdio.h>
#include "holberton.h"
/**
 *find_square -main entry.
 *@x:int num to find sqr
 *@y: int sqr of x
 *Description:func that finds the square root of a number
 * Return:int
 **/
int find_square(int x, int y)
{
/*
 * sqr root of x is a y number mult by itself
 * sqr x = y * y;
*/
	int square = y * y;

	if (square > x)
		return (-1);

	if (square == x)
		return (y);

	else
		return (find_square(x, y + 1));
}
/**
 *_sqrt_recursion -main entry.
 *@n:int
 *Description:function that returns the natural square root of a number
 * Return:void
 **/
int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}

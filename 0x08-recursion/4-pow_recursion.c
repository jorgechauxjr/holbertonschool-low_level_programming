#include <stdio.h>
#include "holberton.h"
/**
 *_pow_recursion -main entry.
 *@x:integer
 *@y: integer
 *Description:function that returns the value of x raised to the power of y.
 * Return:int
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
	if (y == 0)
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

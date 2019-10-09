#include <stdio.h>
#include "holberton.h"
/**
 *factorial -main entry.
 *@n:integer
 *Description:function that returns the factorial of a given number.
 * Return:void
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);

        if (n == 0) || (n == 1)
		return (1);

	return (n * factorial (n - 1));
}

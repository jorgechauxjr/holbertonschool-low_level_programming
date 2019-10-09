#include <stdio.h>
#include "holberton.h"
/**
 *find_prime -main entry.
 *@x:int
 *@y:int
 *Description:aux func to find if a number is prime
 * Return:1 if x is prime
 **/
int find_prime(int x, int y)
{
	if (x < 2)
		return (0);
	if (y * y > x)
		return (1);


	if (x % y == 0)
		return (0);

	else
		return (find_prime(x, y + 1));
}

/**
 *is_prime_number -main entry.
 *@n:char pointer
 *Description:Function that checks if a number is a prime number
 * Return:1 if is prime otherwise return 0
 **/
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

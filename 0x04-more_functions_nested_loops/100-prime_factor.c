#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 *main -main entry.
 *void: nothing
 *Description: Print max prime number
 * Return: void
 **/

int main(void)
{
	long int n = 20;
	long int d;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (d = 3; d < sqrt(n); d = d + 2)
	{
		while (n % d == 0)
		{
			n = n / d;
		}
	}
	printf("%li", n);
	return (0);
}

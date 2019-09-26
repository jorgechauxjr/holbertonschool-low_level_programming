#include <stdio.h>
#include "holberton.h"

/**
 *main -main entry.
 *void: nothing
 *Description: Print numbers from 1 to 100
 *multiples of 3 Fizz of 5 Buzz both FizzBuzz
 * Return: void
 **/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
		{
			printf("Buzz");
		}
		else
		{

		if ((n % 3 != 0) && (n % 5 != 0))
		{
			printf("%d", n);
		}
		else
		{
			if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else
			{
				if (n % 3 == 0)
					printf("Fizz");
				if (n % 5 == 0)
					printf("Buzz");
			}
		}
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}

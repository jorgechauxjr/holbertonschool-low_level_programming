#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - it is where the program start
 *
 *Description: a random number is generated and at the end
 *it prints if is positive, negative or zero
 *Return: positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	int lastD = n % 10;

	if (n > 5)

	{
		printf("Last digit of %d is %d and is greater than 5", n, lastD);
	}
	else
	{
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0", n, lastD);
		}
		else
		{
			if (n < 6)
			{
				if (n != 0)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0", n, lastD);
				}

			}

		}
	}

	return (0);
}

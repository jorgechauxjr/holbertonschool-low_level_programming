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
	int lastD = 0;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	if (lastD < 0)
	{
		lastD = -lastD;
	}

	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else
	{
		if (lastD == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastD);
		}
		else
		{
			if (lastD < 6)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
			}

		}
	}

	return (0);
}

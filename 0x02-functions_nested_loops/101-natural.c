#include "holberton.h"
#include <stdio.h>
/**
 * main - This functions adds two numbers
 * Description:program prints the sum of all the multiples of 3 or 5
 * Return: void
 **/
int main(void)
{
	int n, s;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s = s + n;
		}
	}
	printf("%d", s);

	return (0);
}

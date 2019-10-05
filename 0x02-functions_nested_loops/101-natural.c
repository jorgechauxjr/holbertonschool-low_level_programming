#include <stdio.h>
/**
 * main - entry point
 * Description:program prints the sum of all the multiples of 3 or 5
 * Return: void
 **/
int main(void)
{
	int n, s  = 0;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s = s + n;
		}
	}
	printf("%d\n", s);

	return (0);
}

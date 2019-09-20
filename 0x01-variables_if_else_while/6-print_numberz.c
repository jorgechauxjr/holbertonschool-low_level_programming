#include <stdio.h>

/**
 * main - entry point
 * Description: print the numbers.
 * Return: 0
 */

int main(void)
{
	int number = 48;
	int max = 57;

	while (number <= max)
	{
		putchar (number);
		number++;
	}
	putchar ('\n');

	return (0);
}

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
	char letter = 'a';
	char f = 'f';

	while (number <= max)
	{
		putchar (number);
		number++;
	}
	while (letter <= f)
	{
		putchar (letter);
		letter++;
	}
	putchar ('\n');

	return (0);
}

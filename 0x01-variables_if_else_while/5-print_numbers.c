#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet using putchar.
 * Return: 0
 */
int main(void)
{
	int number = 0;
	int max = 9;

	while (number <= max)
	{
		printf("%d", number);
		number++;
	}
	putchar ('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet using putchar.
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char z = 'z';

	while (letter <= z)
	{
		putchar (letter);
		letter++;
	}
	putchar ('\n');

	return (0);
}

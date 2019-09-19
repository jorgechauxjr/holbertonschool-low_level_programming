#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet.
 * Return: 0
 */
int main(void)
{
	char letter ='a';
	char z = 'z';

	while (letter <= z)
	{
		putchar (letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}

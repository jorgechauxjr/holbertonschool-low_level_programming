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
		if (letter == 'q')
		{
			letter++;
		}
		else
		{
			if (letter == 'e')
			{
				letter++;
			}
		}
		putchar (letter);
		letter++;
	}
	putchar ('\n');

	return (0);
}

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
/*el 48 es 0 en asci y el 57 es 9 en asci */

	while (number <= max)
	{
		putchar (number);
		if (number < max)
		{
			putchar (',');
			putchar (' ');
		}

		number++;
	}
	putchar ('\n');

	return (0);
}

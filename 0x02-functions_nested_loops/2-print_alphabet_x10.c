#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *Description: show the alphabet
 * Return
 */
void print_alphabet_x10(void)
{
	char ch;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

	}
}

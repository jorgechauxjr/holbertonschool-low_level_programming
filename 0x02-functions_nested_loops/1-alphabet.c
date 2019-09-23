#include "holberton.h"

/**
 * main - entry point
 *Description: show the alphabet
 * Return
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 *print_rev -main entry.
 *void: nothing
 *@s: char pointer
 *Description: function prints string in reverse followed by a new line.
 * Return: void
 **/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c--; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}

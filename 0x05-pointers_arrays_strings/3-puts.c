#include "holberton.h"

/**
 *_puts -main entry.
 *void: nothing
 *@str: char pointer
 *Description:  function that prints a string, followed by a new line
 * Return: void
 **/
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}

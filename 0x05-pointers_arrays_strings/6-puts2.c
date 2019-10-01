#include "holberton.h"
/**
 *puts2 -main entry
 *void: nothing
 *@str: char pointer
 *
 *Description:Function prints every other character of a string
 *Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		_putchar(str[c]);
	}
	_putchar('\n');
}

#include <stdio.h>
#include "holberton.h"
/**
 *_puts_recursion -main entry.
 *@s:char pointer
 *Description:Function that prints a string, followed by a new line
 * Return:void
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

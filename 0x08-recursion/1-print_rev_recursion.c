#include <stdio.h>
#include "holberton.h"
/**
 *_print_rev_recursion -main entry.
 *@s:char pointer
 *Description:Function that prints a string in reverse.
 * Return:void
 **/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

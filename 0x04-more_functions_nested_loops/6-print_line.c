#include "holberton.h"

/**
 * print_line -main entry.
 * void: nothing
 *@n: integer variable
 *Description: Function that draws a straight line in the terminal
 * Return: void
 **/


void print_line(int n)
{
	int cont;

	if (n > 0)
	{
		for (cont = 0; cont < n; cont++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

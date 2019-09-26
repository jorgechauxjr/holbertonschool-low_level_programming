#include "holberton.h"

/**
 * print_diagonal -main entry.
 * void: nothing
 *@n: integer, number of times that \ will be printed
 *Description: function that draws a diagonal line on the terminal.
 * Return: void
 **/

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar('\n');
				}
	}
	else
	{
		_putchar ('\n');
	}
}

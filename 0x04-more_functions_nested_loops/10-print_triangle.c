#include "holberton.h"

/**
 * print_triangle -main entry.
 * void: nothing
 *@size: integer function that prints a triangle, followed by a new line.
 *Description: Prints a square followed by a new line
 * Return: void
 **/

void print_triangle(int size)
{
	int x, c;

	if (size > 0)
	{

	for (x = 0; x < size; x++)
	{
		for (c = 0; c < size; c++)
		{
			if (c < (size - x - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}

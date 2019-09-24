#include "holberton.h"

/**
 * print_sign - entry point
 * @c: character
 * Description: return 1 if c is in lower case
 * Return: 1 or 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
			}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

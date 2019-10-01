#include "holberton.h"
/**
 *puts_half-main entry.
 *void: nothing
 *@str: char pointer
 *Description:Function that prints half of a string, followed by a new line.
 * Return: void
 **/
void puts_half(char *str)
{
	int lenght = 0, half, n = 0;

	while (str[lenght] != '\0')
		lenght++;

	if (!(lenght % 2 == 0))
	{
		half = (lenght - 1) / 2;
		n = lenght - half;

		for (; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else
	{
	for (half = lenght / 2; str[half] != '\0'; half++)
		_putchar(str[half]);
	}
			_putchar('\n');
}

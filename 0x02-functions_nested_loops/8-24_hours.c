#include "holberton.h"

/**
 * jack_bauer - entry point
 * @void: character
 * Description: print ohur from 00:00 to 23:59
 * Return: 1 or 0
 */
void jack_bauer(void)

{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}

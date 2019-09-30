#include <stdio.h>
#include "holberton.h"

/**
 *_strlen -main entry.
 *void: nothing
 *@s: char pointer
 *Description: Function that returns the length of a string.
 * Return: void
 **/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
/*\0 is the Null character */
	{
		c++;
	}
	return (c);
}

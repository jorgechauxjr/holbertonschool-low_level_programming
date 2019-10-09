#include <stdio.h>
#include "holberton.h"
/**
 *_strlen_recursion -main entry.
 *@s:char pointer
 *Description: function that returns the length of a string.
 * Return:void
 **/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	else
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

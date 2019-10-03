#include <stdio.h>
#include "holberton.h"
/**
 **string_toupper -main entry.
 *void: nothing
 *@a:char pointer
 *Description: function changes lowercase letters of string to uppercase
 * Return:void
 **/
char *string_toupper(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if ((a[c] >= 97) && (a[c] <= 122))
			a[c] = a[c] - 32;
	}
	return (a);
}

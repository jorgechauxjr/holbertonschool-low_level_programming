#include <stdio.h>
#include "holberton.h"
/**
 **_strncpy -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that copies a string.
 * Return:  pointer to the resulting string dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '0'; c++)
		dest[c] = src[c];

	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}

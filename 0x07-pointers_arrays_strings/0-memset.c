#include <stdio.h>
#include "holberton.h"
/**
 **_memset -main entry.
 *@s:char pointer
 *@b: char variable
 *@n: integer variable
 *Description:function that fills memory with a constant byte.
 * Return:char pointer
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

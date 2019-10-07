#include <stdio.h>
#include "holberton.h"
/**
 **_strchr -main entry.
 *@s:char pointer
 *@c: char variable
 *Description: function that locates a character in a string
 * Return:char pointer
 **/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
       }
	if (s[i] == c)
	return (s + i);
	return ('\0');
/*
 *     &s[i] is equal to (s + 1) is a pointer, it means adress of.
 *      *(s+1) is equal to s[1] value of
 */
}

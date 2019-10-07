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
	char *ptr = s;

	for (; *ptr != '\0'; ptr++)
	{
		if (*ptr == c)
		{
			break;
		}
	}
	if (*ptr == c)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

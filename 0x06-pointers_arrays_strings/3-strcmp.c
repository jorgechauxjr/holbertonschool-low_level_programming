#include <stdio.h>
#include "holberton.h"
/**
 *_strcmp -main entry.
 *void: nothing
 *@s1: char pointer
 *@s2: char pointer
 *Description: function that compares two strings.
 * Return: Integer with the diference
 **/
int _strcmp(char *s1, char *s2)
{
	int c = 0, r = 0;

	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
		c++;

	if (s1[c] != s2[c])
		r  = s1[c] - s2[c];

	return (r);
}

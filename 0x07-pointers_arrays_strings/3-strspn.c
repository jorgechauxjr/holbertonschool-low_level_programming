#include <stdio.h>
#include "holberton.h"
/**
 **_strspn -main entry.
 *@s:char pointer
 *@accept: char variable
 *Description:function that gets the length of a prefix substring.
 * Return:unsigned int
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (c);
	}
	return (c);
}

#include <stdio.h>
#include "holberton.h"
/**
 **_strpbrk -main entry.
 *@s:char pointer
 *@accept: char variable
 *Description:function that searches a string for any of a set of bytes.
 * Return:unsigned int
 **/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
/* (s + 1) move pointer to the position where I found the equals values*/
			}
		}
	}
	return (0);
}

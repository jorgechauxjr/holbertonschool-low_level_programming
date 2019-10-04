#include <stdio.h>
#include "holberton.h"
/**
 **rot13 -main entry.
 *char: character
 *@a:char pointer
 *Description: function that encodes a string using rot13.
 * Return: char pointer
 **/
char *rot13(char *a)
{
	int c, c2;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; a[c] != '\0'; c++)
	{
		for (c2 = 0; abc[c2] != '\0'; c2++)
		{
			if (a[c] == abc[c2])
			{
				a[c] = rot13[c2];
				break;
			}
		}
	}
	return (a);
}

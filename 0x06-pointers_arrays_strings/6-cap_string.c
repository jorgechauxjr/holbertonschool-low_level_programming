#include <stdio.h>
#include "holberton.h"
/**
 **char *cap_string -main entry.
 *void: nothing
 *@a:char pointer
 *Description: function that capitalizes all words of a string.
 * Return:void
 **/
char *cap_string(char *a)
{
	int c, c2;
	char sp [] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((a[0] >= 97) && (a[0] <= 122))
	{
		a[0] = a[0] - 32;
	}

	for (c = 0; a[c] != '\0'; c++)
	{
		for (c2 = 0; sp[c2] != '\0'; c2++)
		{
			if (a[c] == sp[c2])
			{
				if ((a[c + 1] >= 97) && (a[c + 1] <= 122))
				{
					a[c + 1] = a[c + 1] - 32;
				}
			}
		}
	}
		return (a);
}

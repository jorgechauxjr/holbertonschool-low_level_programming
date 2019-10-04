#include <stdio.h>
#include "holberton.h"
/**
 **leet -main entry.
 *void: nothing
 *@a:char pointer
 *Description: function that encodes a string
 * Return:void
 **/
char *leet(char *a)
{
	int c, c2;
	char sp[] = {97, 101, 111, 116, 108};
	char nm[] = {52, 51, 48, 55, 49};
/* num of sp are the lettter in ascci. Nm the numbers in ascii*/

	for (c = 0; a[c] != '\0'; c++)
	{
		for (c2 = 0; sp[c2] != '\0'; c2++)
		{
			if ((a[c] == sp[c2]) || (a[c] == sp[c2] - 32))
			{
				a[c] = nm[c2];
			}
		}
	}
	return (a);
}

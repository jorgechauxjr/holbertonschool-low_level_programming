#include <stdio.h>
#include "holberton.h"
/**
 **_memcpy -main entry.
 *@dest:char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that copies memory area.
 * Return:char pointer
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

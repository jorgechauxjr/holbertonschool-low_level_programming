#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *Description:copies the string pointed by src to the buffer pointed to by dest
 * Return: void
 **/
char *_strcpy(char *dest, char *src)
{

	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];

		if (src[c] == '\0')
			dest[c + 1] = src[c + 1];
	}
	
	return (dest);

}

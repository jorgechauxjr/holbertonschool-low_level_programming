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

	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];

		c++;
	}
	dest[c + 1] = src[c + 1];


	return (dest);

}

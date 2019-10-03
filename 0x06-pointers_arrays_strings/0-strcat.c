#include <stdio.h>
#include "holberton.h"
/**
 **_strcat -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *Description: function that concatenates two strings.
 * Return:  pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int length = 0, c;

	while (dest[length] != '\0')
		length++;

	for (c = 0; src[c] != '\0'; c++, length++)
		dest[length] = src[c];

	return (dest);
}

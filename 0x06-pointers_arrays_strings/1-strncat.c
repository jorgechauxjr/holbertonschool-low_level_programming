#include <stdio.h>
#include "holberton.h"
/**
 **_strncat -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that concatenates two strings.
 * Return:  pointer to the resulting string dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, c;

	while (dest[length] != '\0')
		length++;

	for (c = 0; c < n ; c++, length++)
		dest[length] = src[c];



	return (dest);
}

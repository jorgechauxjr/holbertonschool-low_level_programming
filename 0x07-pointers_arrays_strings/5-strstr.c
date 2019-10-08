#include <stdio.h>
#include "holberton.h"
/**
 *compare -main entry
 *@str:char pointer
 *@str2: char variable
 *Description:compare two pointer to char
 * Return:int
 */
int compare(char *str, char *str2)
{
	while (*str == *str2)
	{
		str++;
		str2++;
	}
	if (str2 == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
			}
}

/**
 **_strstr -main entry.
 *@haystack:char pointer
 *@needle: char variable
 *Description: func finds first occurrence of substring needle in string hay
 * Return:char pointer
 **/
char *_strstr(char *haystack, char *needle)
{

	char ptr1 = haystack;
	char ptr2 = needle;

	while (*ptr1 != '\n')
	{
		if (*ptr1 == *ptr2 && compare(ptr1, ptr2))
		{
			return (ptr1);
		}
		ptr1++;
	}
	return (NULL);
}

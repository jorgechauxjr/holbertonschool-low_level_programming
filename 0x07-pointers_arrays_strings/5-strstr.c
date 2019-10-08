#include <stdio.h>
#include "holberton.h"
/**
 **_strstr -main entry.
 *@haystack:char pointer
 *@needle: char variable
 *Description: func finds first occurrence of substring needle in string hay
 * Return:char pointer
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *pth = haystack;
		char *ptn = needle;

		while (*pth == *ptn && *pth != '\0' && *ptn != '\0')
		{
			pth++;
			ptn++;
		}
		if (*ptn == '\0')
			return (pth);
		pth = pth + 1;
	}
	return (0);
}

#include "holberton.h"

/**
 * _islower - entry point
 * @c: character
 * Description: return 1 if c is in lower case
 * Return: 1 or 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}



}

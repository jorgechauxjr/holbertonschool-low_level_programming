#include "holberton.h"

/**
 * _isalpha - entry point
 * @c: c is an integer
 * Description: return 1 if a letter is lower or uppercase
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

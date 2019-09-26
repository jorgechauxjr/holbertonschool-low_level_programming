#include "holberton.h"

/**
 * _isupper -main entry.
 * @c: integer to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 **/


int _isupper(int c)
{
/*65 y 90 son los codigos ascci para A y Z */

	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

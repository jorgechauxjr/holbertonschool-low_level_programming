#include "holberton.h"

/**
 * _isdigit -main entry.
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 **/


int _isdigit(int c)
{
/*48 y 57 son los codigos ascci para 0 y 9 */
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
